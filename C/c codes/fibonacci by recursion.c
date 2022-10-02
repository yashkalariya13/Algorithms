// function to find the nth fibonacci
#include <stdio.h>
int main()   
{
	int n = 0,m,i;
	printf("enter value of m  ");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		printf("\t%d",fib(n));
		n++;
	}
	return 0;
}
int fib(int n)
{
if (n == 0) { return 0; }
if (n == 1) { return 1; }
else
return fib(n - 1) + fib(n - 2);
}



















// 1st and 2nd term are 0 and 1
// nth term is sum of previous two terms
