#include<stdio.h>
#include<string.h>

void main()
{
//	int i;
//	char n1[5]="harsh"; 
//	printf("\n \t original name is %s",n1); 
//	printf("\n"); 
//
//	for(i=0;i<5;i++)
//	{
//		printf("\n%d",n1[i]);	
//	}
//	printf("\n");	
//	for(i=0;i<5;i++)
//	{
//		n1[i]=n1[i]+32;
//		printf("\n%d",n1[i]);
//			
//	}
//	printf("\n");
//	printf("\n \t converted name is %s",n1);





	 // lower to upper 
	int i;
	char n1[20]; 
	
	printf("\n enter your string  ");
	scanf("%s",n1);
	int l=strlen(n1);
	
//	puts(n);

	printf("\n \t original string is %s",n1); 
	printf("\n"); 
	
	for(i=0;i<l;i++)
	{
		n1[i]=n1[i]-32;		
	}
	printf("\n \t converted string is %s",n1);
	
	
	
	
	
	
	
	
	
	
	
	
	


}
