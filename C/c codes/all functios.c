#include"stdio.h"                           //standard library or header file
void add();                                 // function prototye
int sub();                                  // function prototye
void div(int a,int b);                      // function prototye
int mul(int a,int b);                       // function prototye = when writing user defined fun below main
void main()
{	int a,b,c;
	add();                                  // 1 
	c=sub();
	printf("\n substraction is %d",c);
	int sub();                               
	
	printf("\n enter first no  ");
		scanf("%d",&a);
		printf("\n enter second no  ");       
		scanf("%d",&b);
	      div(a,b);
	      
	      printf("\n enter first no  ");
		scanf("%d",&a);
		printf("\n enter second no  ");
		scanf("%d",&b);
	      c=mul(a,b);                       //call of function
	      printf("\n multiplication is %d",c);
}
void add()
{	int a,b,c;
		printf("\n enter first no  ");        //void as return type and zero parameter
		scanf("%d",&a);
		printf("\n enter second no  ");
		scanf("%d",&b);
		c=a+b;
		printf("\n addition is %d",c);
}
int sub()
{	int a,b,c;
	printf("\n enter first no  ");
		scanf("%d",&a);                     //int as return type and zero parameter
	printf("\n enter second no  ");
		scanf("%d",&b);
		c=a-b;
	return c;
}
void div(int a,int b)                    //function prototype
{	
	int c;                            //void as return type and parameter = input to main fun
	c=a/b;
	printf("\n division is %d",c);
	
}
int mul(int a,int b)                    //function prototype
{	
	int c;                              //int as return type and  parameter
	c=a*b;
	return c;
	
	
}


