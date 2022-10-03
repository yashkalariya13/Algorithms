#include <stdio.h>

//void display( int a);
//// recursion = calling by own   goes infinite   imp = termiation
//void main()
//{    int a=0;
//	display(a);
//}
//void display( int a)
//{
//	while(a<2)   //termination
//	{	a++;	
//		printf("hello\t");
//	display(a);  //recursive
//
//	}
//	
//}


int main()   
{
	int a = 0,result = 0;
	printf("enter values of a  ");
	scanf("%d",&a);
	result = fact (a);
	printf("%d",result);
	return 0;
}
int fact(int a)
{
	if(a==0)
	return 1;
	return a*fact(a-1);   //recursive call
}

























