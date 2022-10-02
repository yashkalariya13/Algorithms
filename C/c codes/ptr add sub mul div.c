#include <stdio.h>
void add(int *a,int *b);
void sub(int *a,int *b);
void mul(int *a,int *b);
void div(int *a,int *b);
void main()
{
	int a,b;
	printf("enter values of a and b  ");
	scanf("%d  %d",&a,&b);

	add (&a,&b);
		sub (&a,&b);
			mul (&a,&b);
				div (&a,&b);
	
}
void add(int *a,int *b)
{
	int c;
	c=*a+*b;
	printf("addition is %d\n",c);
}
void sub(int *a,int *b)
{
	int c;
	c=*a-*b;
	printf("substraction is %d\n",c);
}
void mul(int *a,int *b)
{
	int c;
	c=*a * *b;
	printf("multiplition is %d\n",c);
}
void div(int *a,int *b)
{
	int c;
	c=*a / *b;
	printf("division is %d\n",c);
}
