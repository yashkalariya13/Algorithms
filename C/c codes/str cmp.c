#include<stdio.h>
#include<string.h>

void main()
{
	char n1[100] ;
	char n2[100];

	printf("\n enter your first name     ");
	scanf("%s",n1);
	printf("\n%s",n1);
	
	printf("\n enter your last name     ");
	scanf("%s",n2);
	printf("\n%s",n2);
	
		int res; 
		res = strcmp (n1,n2);              //alphabates are considered by lexicographic order (dictionary order)                 
     
	if(res==0)
	{
		printf("\n both are equal ");
	}
	else if(res>0)
	{
		printf("\n first is greater ");
	}
	else if(res<0)
	{
		printf("\n first is smaller ");
	}




}
