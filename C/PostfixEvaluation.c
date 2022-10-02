/*
Given a postfix expression in digits(only from 0-9), evaluate it and get the answer using stack.
Test Case
i.) 65*3+ (ans - 33)
ii.) 245+* (ans - 18)

Short Algorithm
---> Include all the required libraries
---> Make the function push and pop
---> read the postfix expression and read till the end
---> find the result and push it in the stack
---> call the function whatever required for finding the result
---> pop the result in a variable and print it
*/

//Including Libraries
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Global Declarations
int size = 50;
char input[50];
int arr[50];
int top = -1;

//Function Declarations
int pop();
void push();

//Main Function
int main()
{
    int i, x, y, res;
    char c;
    int ans;
    printf("Enter the Postfix Expression: ");
    scanf("%s", &input);
    for(i = 0; input[i] != '\0'; i++)
    {
        c = input[i];
        // if(isalpha(c) == 0) //it cannot accept alphabets, only digits
        // {
        //     printf("\nWrong Input! Enter only digits for the solution\n");
        // }
        if(isdigit(c)) //check for digits and then pushing the value
        {
            push(c - 48); //pushing the actual value in the expression by subtracting the ASCII value of 0
        }
        else if(c == '+' || c == '-' || c == '*' || c == '/')
        {
            y = pop();
            x = pop();
            switch(c) //for finding the results
			{
				case '+': res = x + y; break;
				case '-': res = x - y; break;
				case '*': res = x * y; break;
				case '/': res = x / y; break;
			}
            push(res); //pushing in the array
        }
    }
    ans = pop(); //popping the final answer
    printf("\nThe Postfix Expression is: %d", ans);
    return 0;
}

//Function Implementation
void push(int a)
{
	if (top < size - 1)
	{
		arr[++top] = a; //incrementing the top position and then inserting the element
	}
	else
	{
		printf("\nStack Overflow\n");
		exit(0);
	}
}
int pop()
{	
	int a;
	if (top > -1)
	{
		a = arr[top]; //popping the element
		arr[top--] = -1;
		return a; //returning the element
	}
	else
	{
		printf("\nNo Element There\n");
		exit(0);
	}
}