#include<stdio.h>                          //header file
void main()                                //main function
{
	int i,arr[5],num1,num2;                //declaration of variable
	for(i=1;i<=5;i++)                      // for loop is use for to take numbers from user
	{
	   printf("enter your %d number",i);
	   scanf("%d",&arr[i]);
	} 	printf("your enter nmubers\n");
	for(i=1;i<=5;i++)                      //for loop is use for to print numbers that give by user
	   printf("%d\n",arr[i]);
	for(i=1;i<=5;i++)                      //for loop is use for to find max number
	{
	  if (num1<=arr[i])
	    num1=arr[i];
	}
	for(i=1;i<=5;i++)                     //for loop is use for to find min number
	{
	  if (num2>=arr[i])
	    num2=arr[i];
	}
	printf("\n max number is %d",num1);   //to print max number
	printf("\n min number is %d",num2);	  //to print min number
}
