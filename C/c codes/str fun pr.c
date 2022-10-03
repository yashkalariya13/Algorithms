#include<stdio.h>
#include<string.h>
//                                             //stringcopy without strcpy
//void main()
//
//{
//		int i,l=0;
//	char n1[20]; 
//	
//	
//	printf("\n enter your string  ");
//	scanf("%s",n1);
//	
//	for(i=0;n1[i]!='\0';i++)
//	{
//				l++;
//	}
//	printf("\n\t  %d",l);
//}















//own function                               call in void   baki all own fun madhe

//void stringlength();
//void main()
//
//{		
//	stringlength();	
//}
//void stringlength()
//{
//	int i,l=0;
//	char n1[20]; 
//	printf("\n enter your string  ");
//	scanf("%s",n1);
//	
//	for(i=0;n1[i]!='\0';i++)
//	{
//				l++;
//	}
//	printf("\n\t  %d",l);	
//}







////                                               parameter with return type

//int stringlength(char n1[]);
//void main()
//
//{	
//	int i,l=0;
//	char n1[20]; 
//	printf("\n enter your string  ");
//	scanf("%s",n1);	
//	l=stringlength(n1);	
//	printf("\n\t string length is %d",l);
//}
//int stringlength(char n1[])
//{
//	int i,l=0;
//
//	
//	for(i=0;n1[i]!='\0';i++)
//	{
//				l++;
//	}
//	return l;
//}




//                        its by str function  we want it without using strcpy =  by own function

// void main()
// {
//	char name[10] ;
// 	char name1[10];
// 	
// 	scanf("%s",name);
//	printf("\n%s",name);
// 	
// 	strcpy(name1,name)  ;                                  //to copy name from one string to another (destination , source)
// 	printf("\n name1 is %s",name1);
//    printf("\n name is %s",name);	
//}



/*                                      own function=to copy name from one string to another
void main()
{
	int i;
	char n1[20],n2[20]; 

	printf("\n enter your string  ");
	scanf("%s",n1);
	printf("\n entered string is = %s",n1);
	
	for(i=0;n1[i]!='\0';i++)
	{
	    n2[i]=n1[i];
	   
	}
		printf("\n copied string is = %s",n2);
	
}*/




/*                                                         // by parameter                                 
void stringcopy(char n2[20],char n1[20]);
void main()
{
	int i;
	char n1[20],n2[20]; 

	printf("\n enter your string  ");
	scanf("%s",n1);
	printf("\n entered string is = %s",n1);
	stringcopy(n2,n1);
	printf("\n copied string is = %s",n2);
	
}
void stringcopy(char n2[],char n1[])
{   int i;
	for(i=0;n1[i]!='\0';i++)
	{
	    n2[i]=n1[i]; 
	}
}
*/





///                                                 own function=to put one str after other
/*
void stringconcatination(char n2[],char n1[]);
void main()
{
	char f[20],c[20]; 

	printf("\n enter first string  ");
	scanf("%s",f);
	printf("\n entered string is = %s",f);
	
	printf("\n enter second string  ");
	scanf("%s",c);
	printf("\n entered string is = %s",c);
	
	stringconcatination(f,c);
	printf("\n new string is = %s",f);
	
}
void stringconcatination(char f[],char c[])
{   int i,j;
	for(i=0;i<strlen(f);i++)
	{}
	for(j=0;j<strlen(f);j++)
		{
	    	f[i]=c[j]; 
	    	i++;
		}
}
*/





/*                                        string compare by own function                          
void stringcompare(char n[],char m[]);
void main()
{
	char n[20],m[20]; 

		printf("\n enter first string  ");
	scanf("%s",n);
	printf("\n entered string is = %s",n);
	
		printf("\n enter second string  ");
	scanf("%s",m);
	printf("\n entered string is = %s",m);
	
	stringcompare(n,m);
	
}
void stringcompare(char n[],char m[])
{
	int l1,l2;
	l1 = strlen(n);
	l2 = strlen(m);
	
	if(l1==l2)
	printf("\nboth are equal");
	else if(l1<l2)
	printf("\nsecond is greater");
	else 
	printf("\nfirst is greater");
}
*/
	
	
	
	
	
void stringreverse(char n2[20],char n1[20]);
void main()
{
	int i;
	char n1[20],n2[20]; 

	printf("\n enter your string  ");
	scanf("%s",n1);
	printf("\n entered string is = %s",n1);
	stringreverse(n1,n2);
	printf("\n reversed string is = %s",n2);
	
}
void stringreverse(char n1[20],char n2[20])
{   int i;
	for(i=strlen(n1);i=0;i++)
	{
	  
	}
}

















