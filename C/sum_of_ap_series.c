/******************************************************************************

An arithmetic progression or arithmetic sequence (AP) is a sequence of 
numbers such that the difference between the consecutive terms is constant. For 
instance, the sequence 5, 7, 9, 11, 13, 15, . . . is an arithmetic progression 
with a common difference of 2. A finite portion of an arithmetic progression 
is called a finite arithmetic progression and sometimes just called an 
arithmetic progression. The sum of a finite arithmetic progression is called an 
arithmetic series. 

In the example below, it will return the sum of the arithmetic series using the 
main function, provided that the total numbers in the series, the common 
difference and the first term of the series are given as user input.

Source: https://en.wikipedia.org/wiki/Arithmetic_progression

-----------------------------------------------------------------------------
Expected output in the terminal:

> Enter the first number of the A.P. series: 1
> Enter the total numbers in the A.P. series: 20
> Enter the common difference of A.P. series: 2
> Sum of the series A.P.: 1 + 3 + 5 + 7 + 9 + 11 + 13 + 15 + 17 + 19 + 21 + 23 + 25 
+ 27 + 29 + 31 + 33 + 35 + 37 + 39 = 400 

*******************************************************************************/

#include<stdio.h>
#include<math.h>

int main() {

	// Global Declaration
	int a,n,d,i,nt;
	int sum=0;

	// Take the input
	printf("Enter the first number of the A.P. series: ");
	scanf("%d",&a);
	printf("Enter the total numbers in the A.P. series: ");
	scanf("%d",&n);
	printf("Enter the common difference of A.P. series: ");
	scanf("%d",&d);

	// Summation of the series
	sum = ( n * ( 2 * a + ( n -1 ) * d ) )/ 2;
	
	// nth term of the series
	nt = a + (n-1) * d;

	// Print the result with the series
	printf("Sum of the series A.P.: ");
	for (i=a;i<=nt; i= i + d ) {
		if (i != nt)
		             printf("%d + ",i); else
		             printf("%d = %d ",i,sum);
	}
	return 0;

}