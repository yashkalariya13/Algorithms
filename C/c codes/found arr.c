#include<stdio.h>                                       
 void main ()   
 {
	int i,j,k,a[5] ;
	
	for (i=0;i<5;i++)
	{
		scanf("\n%d",&a[i]);
	}
	for (i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	
		printf("\n enter key  ");
	 	scanf("\n%d",&j);
	 	
	for (i=0;i<5;i++)
	{
		if (j==a[i])
           {
			k=0;
			break;
			}
		else
		{
			k=1;
			} }
	
		if (k==0)
		{
		printf("\n found");
	 	
	 }
	 	
	 	else{
		
	 	printf("\n not found");}
		 
		
}
