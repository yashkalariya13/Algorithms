/*
Write a Menu - Driven Program for the user to use the simple operations of Queue 
using the concept of arrays.
Basic Functions are:
    i.) enqueue - add an element to the tail of a queue
    ii.) dequeue - remove an element from the head of a queue
    iii.) first - examine the element at the head of the queue
    iv.) isfull - examine the queue is full or not
    v.) isempty - examine the queue is empty or not
    vi.) size - determines the number of elements in the queue

Short Algorithm
---> 
*/

//Including Libraries
#include <stdio.h>
#include <stdlib.h>

//Global Variable Declaration
int max = 4 + 1;
int frnt = -1;
int back = -1;
int arr[4+1];

//Function Declarations
void enqueue();
void dequeue();
void disp();
void first();
void isfull();
void isempty();
void size();

//Main Function
int main()
{
    int opt;
    while(1)
    {
        printf("\nBasic Operations on Queue\n");
        printf("1_Enqueue \n2_Dequeue \n3_Display \n4_First \n5_IsFull \n6_IsEmpty \n7_Size \n8_Exit");
        printf("\nEnter Your Choice: ");
        scanf("%d", &opt);
        switch(opt)
        {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: disp(); break;
            case 4: first(); break;
            case 5: isfull(); break;
            case 6: isempty(); break;
            case 7: size(); break;
            case 8: exit(0); //printf("You are ending the program"); return 0;
            default: printf("\nInvalid Choice\n");
        }
    }
    return 0;  
}

//Function Implementation
void enqueue() //Enqueue Function - For inserting at the end
{
    int inp;
    if(back == max - 1)
    {
        printf("\nQueue Overflow\n");
    }
    else
    {
        if(frnt == -1) {frnt = 0;}
        printf("\nEnter Element to be inserted: ");
        scanf("%d", &inp);
        back++;
        arr[back] = inp;
    }
}

void dequeue() //Dequeue Function - For deleting at the start
{
    if(frnt == -1 || frnt > back)
    {
        printf("\nNo Elements There\n");
    }
    else
    {
        printf("\nThe Dequeued elements is: %d\n", arr[frnt]);
        frnt++;
    }
}

void disp() //Display Function - For displaying all the elements
{
    int i;
    if(frnt == -1)
    {
        printf("\nNo Element There\n");
    }
    else
    {
        printf("\nElements present in the queue are: \n");
        for(i = frnt; i <= back; i++)
        {
            printf("%d\n ", arr[i]);
        }
    }
}

void first() //First Function - For displaying the first element in the queue
{
    if(frnt == -1 || frnt > back)
    {
        printf("\nNo Element There\n");
    }
    else
    {
        printf("\nThe First element is: %d\n", arr[frnt]);
    }
}

void isfull() //isfull Function - For checking the queue is full or not
{
    if(back == max)
    {
        printf("\nThe Queue is Full\n");
    }
    else
    {
        printf("\nThe Queue is not Full\n");
    }
}

void isempty() //isempty Function - For checking the queue is empty or not
{
    if(frnt == -1 || frnt > back)
    {
        printf("\nThe Queue is Empty\n");
    }
    else
    {
        printf("\nThe Queue is not Empty\n");
    }
}

void size() //Size Function - Gets the number of elements in the array
{
    printf("\nThe Number of elements in the array are: %d\n",back+1);
}