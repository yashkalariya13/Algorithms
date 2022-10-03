#include<stdio.h>
int ptr_addition ();
int ptr_substraction ();
int ptr_increment ();
int ptr_decrement ();
void main () 
{	ptr_addition ();
	ptr_substraction ();
	ptr_increment ();
	ptr_decrement ();
}

int ptr_addition ()
{
	int n = 4 ;
	int *ptr1;
	ptr1=&n;
	printf("\n pointer before addition = %d",ptr1);

	ptr1 = ptr1 + 3;
	printf("\n pointer after addition = %d\n",ptr1);

	return 0;
}

int ptr_substraction ()
{
	int m = 4 ;
	int *ptr2;
	ptr2=&m;
	printf("\n pointer before substractio = %d",ptr2);
	
	ptr2 = ptr2 - 3;
	printf("\n pointer after substractio = %d\n",ptr2);
	
	return 0;
}

int ptr_increment ()
{
	int var[] = {10,100,200};
	int i,*ptr3;
	ptr3=var;
	
	for(i=0;i<3;i++)
	{
			printf("\n address of var[%d] = %d",i,ptr3);
			printf("\n value of var[%d] = %d",i,*ptr3);
			ptr3++;
	}
	printf("\n");
}
 

int ptr_decrement ()
{
	int var[] = {10,100,200};
	int i,*ptr4;
	ptr4=&var[2];
	
	for(i=3;i>0;i--)
	{
			printf("\n address of var[%d] = %d",i,ptr4);
			printf("\n value of var[%d] = %d",i,*ptr4);
			ptr4--;
	}
		printf("\n");
}












