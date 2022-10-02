#include<stdio.h>
#include<string.h>

/*void main ()
{
	int a=10;
	int* ptr=&a;
	
	printf("\n%d",&a);
	printf("\n%d",ptr);
	printf("\n%d",*ptr);
	printf("\n%d",&ptr);	
}*/


/*void main ()    // by 2 variables
{
	int a=5, b=10,c,d;
	
	printf("\n value of a = %d",a);
	printf("\n value of b %d",b);
	
	c=a; d=b; a=b; b=c; 
	
	printf("\n value of a %d",a);
	printf("\n value of b %d",b);
	
}*/

/*
void main ()    // by no variables
{
	int a=5, b=10;
	
	printf("\n value of a = %d",a);
	printf("\n value of b %d",b);	 
	  	a=a+b;
	  	b=a-b;
	  	a=a-b;
	printf("\n value of a %d",a);	
	printf("\n value of b %d",b);
	
}
*/


/*
void swap(int a,int b);
void main ()    // by no variables
{
	int a=0, b=0;
	
	scanf("%d",&a);
	printf("\n value of a = %d\n",a);
	scanf("%d",&b);
	printf("\n value of b %d",b);
	
	swap(a,b);	 
	
}
void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n value of a %d",a);	
	printf("\n value of b %d",b);
	
}*/


/*
//         call by value
void swap(int a,int b);
void main ()    // by no variables
{
	int a=0, b=0;
	
	scanf("%d",&a);
	printf("\n value of a = %d\n",a);
	scanf("%d",&b);
	printf("\n value of b %d",b);
	
	swap(a,b);                        //will print same values as main fun    drawback of call by value will not swap in main function
	
		
	printf("\n value of a %d",a);	
	printf("\n value of b %d",b); 
	
}
void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;

}*/

/*
//         call by reference  with one variable
void swap(int* a,int* b);
void main ()    
{
	int a=0, b=0;
	
	scanf("%d",&a);
	printf(" a before swap outside fun = %d\n",a);
	scanf("%d",&b);
	printf(" b before swap outside fun = %d\n",b);
	
	swap(&a,&b);                       
	
		
	printf("\n a after swap outside fun %d\n",a);	
	printf("\n b after swap outside fun %d\n",b); 
	
}
void swap(int* a,int* b)
{
	printf(" a before swap in fun = %d\n",*a);
	printf(" b before swap in fun = %d\n",*b);
  	 	int c;
  	 	c=*a;
  	 	*a=*b;
  	 	*b=c;
  	printf("\n a after swap in fun %d\n",*a);	
	printf("\n b after swap in fun %d\n",*b); 
}
*/



/*
void swap(int* a,int* b); ///by no variable
void main ()    
{
	int a=0, b=0;
	
	scanf("%d",&a);
	printf(" a before swap outside fun = %d\n",a);
	scanf("%d",&b);
	printf(" b before swap outside fun = %d\n",b);
	
	swap(&a,&b);                       
	
		
	printf("\n a after swap outside fun %d\n",a);	
	printf("\n b after swap outside fun %d\n",b); 
	
}
void swap(int* a,int* b)
{
	printf(" a before swap in fun = %d\n",*a);
	printf(" b before swap in fun = %d\n",*b);
  	 	*a=*a+*b;
  	 	*b=*a-*b;
  	 	*a=*a-*b;
  	printf("\n a after swap in fun %d\n",*a);	
	printf("\n b after swap in fun %d\n",*b);
}


void main ()
 {

int a[5]={1,2,3,4,5};
int i;

for(i=0;i<5;i++)
{
	printf("%d",a[i]);
}

}*/


/*
void main ()
 {

int a[5]={1,2,3,4,5};
int i, *ptr=a;

for(i=0;i<5;i++)
{
	printf("%d\n",*ptr);
	*ptr++;
}

}*/


 /*                                     //code for forward n reverse printing of array by pointers.
void main ()
 {

int a[5]={1,2,3,4,5};
int i, *ptr=a;

for(i=0;i<5;i++)
{
	printf("%d\t",*ptr);
	ptr++;
}
	printf("\n\n");
	ptr = &a[4];
for(i=0;i<5;i++)
{	
	printf("%d\t",*ptr);
	ptr--;
}

}*/





                       //  code for forward n reverse printing of my name  by pointers
void main ()
{
char a[5000];
printf("enter your name   ");
gets(a);

int l=strlen(a),i;
char *ptr=&a[0];

for(i=0;i<l;i++)
{
	printf("%c",*ptr);
	ptr++;
}
	printf("\n\n");
	ptr = &a[l-1];
	
for(i=0;i<l;i++)
{	
	printf("%c",*ptr);
	ptr--;
}}



















































































