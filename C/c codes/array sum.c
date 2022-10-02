#include<stdio.h>
void  main()

{
int p,i,sum=0,n[p];

printf("enter your choice of number you want for addition = ");
scanf("\n%d",&p);
printf("enter your %d numbers\n",p);
for(i=1;i<=p;i++)
{ 
	scanf("\n%d",&n[i]);
	
}
for(i=1;i<=p;i++)
{ 
	printf("\n %d",n[i]);
}	
for(i=1;i<=p;i++)
{    
	sum=n[i]+sum;
}
printf("\n\t addition of your %d numbers is %d",p,sum);
}

