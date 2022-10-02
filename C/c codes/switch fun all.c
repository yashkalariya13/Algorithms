/* name           = harshwardhan prakash tilekar
   division       = A 
   batch          = A1
   roll no        = 108
   practical 10  = Write a program in C using functions to display addition, subtraction, multiplication, division of two numbers.
*/

#include"stdio.h"                              //standard library or header file
void add();                                    // function prototye
int sub();                                     // function prototye
void div(int a,int b);                         // function prototye
int mul(int a,int b);                          // function prototye

void main()                                    // system defined main function 

{	int a,b,c,choice,sub();                    //declaration of variable

	printf("MENU");                            // menu
		printf("\n 1) ADDITION ");             // option for ADDITION
		printf("\n 2) SUBSTRACITION ");        // option for SUBSTRACITION
		printf("\n 3) DIVISION ");             // option for DIVISION
		printf("\n 4) MULTIPLICATION ");       // option for MULTIPLICATION
		do{
		
		printf("\n  ENTER YOUR CHOICE    ");   // printf statement for asking user's choice
		scanf("%d",&choice);                   // scanf statement take and store value from user
		
		switch (choice)                        // switch cases for choice 
	{	case 1 :
		add();                                 //calling of function
		break;                                 // end of case
		
		case 2 :
	
	    c=sub();                                   //calling of function
	    printf("\n substraction is %d",c);         //printf function for printing results
		break;                                     // end of case
		
		case 3 :
		printf("\n enter first no  ");
		scanf("%d",&a);
		printf("\n enter second no  ");
		scanf("%d",&b);
	      div(a,b);                                //calling of function
		break;                                     // end of case 
		
		case 4 :
	  printf("\n enter first no  ");
		scanf("%d",&a);
		printf("\n enter second no  ");
		scanf("%d",&b);
	      c=mul(a,b);                               //calling of function
	      printf("\n multiplication is %d",c);      //printf function for printing results
		break;                                      // end of case     
		
		default:
	    printf("  invalid choice !!! ");           // printf statement for printing invalid choice           
		break;	  
	}}while(choice!=4);}
	      

void add()                                         //function definition and functon body
{	int a,b,c;
		printf("\n enter first no  ");
		scanf("%d",&a);
		printf("\n enter second no  ");
		scanf("%d",&b);
		c=a+b;                                     //mathematical expression for addition
		printf("\n addition is %d",c);             //printf function for printing results
}
//function with int return type    
int sub()                                          //function definition and functon body
{	int a,b,c;
	printf("\n enter first no  ");
		scanf("%d",&a);
	printf("\n enter second no  ");
		scanf("%d",&b);
		c=a-b;                                     //mathematical expression for substraction
	return c;                                      //return type
}
//function with two parameter
void div(int a,int b)                              //function definition and functon body
{	
	int c;
	c=a/b;                                         //mathematical expression for division
	printf("\n division is %d",c);                 //printf function for printing results
	
}
//function with int return type and two parameter
int mul(int a,int b)                               //function definition and functon body
{	
	int c;
	c=a*b;                                         //mathematical expression for multiplication
	return c;                                      //return type
			
}



/*
case 1 = 
MENU
 1) ADDITION
 2) SUBSTRACITION
 3) DIVISION
 4) MULTIPLICATION
  ENTER YOUR CHOICE    1

 enter first no  10

 enter second no  20

 addition is 30
--------------------------------
Process exited after 6.085 seconds with return value 16
Press any key to continue . . .

case 2 = 
MENU
 1) ADDITION
 2) SUBSTRACITION
 3) DIVISION
 4) MULTIPLICATION
  ENTER YOUR CHOICE    2

 enter first no  10

 enter second no  5

 substraction is 5
--------------------------------
Process exited after 4.903 seconds with return value 19
Press any key to continue . . .

case 3 =
MENU
 1) ADDITION
 2) SUBSTRACITION
 3) DIVISION
 4) MULTIPLICATION
  ENTER YOUR CHOICE    3

 enter first no  200

 enter second no  5

 division is 40
--------------------------------
Process exited after 5.113 seconds with return value 16
Press any key to continue . . .

case 4 =
MENU
 1) ADDITION
 2) SUBSTRACITION
 3) DIVISION
 4) MULTIPLICATION
  ENTER YOUR CHOICE    4

 enter first no  200

 enter second no  5

 multiplication is 1000
--------------------------------
Process exited after 5.673 seconds with return value 24
Press any key to continue . . .

case 5 =
MENU
 1) ADDITION
 2) SUBSTRACITION
 3) DIVISION
 4) MULTIPLICATION
  ENTER YOUR CHOICE    5
  invalid choice !!!
--------------------------------
Process exited after 1.677 seconds with return value 21
Press any key to continue . . .

*/

