#include <stdio.h>
void main()
{
int row,col;
   float a[2][2];                    //2d dimensional array
	
	for (row=0;row<2;row++)
	{
		for (col=0;col<2;col++)
		{
			scanf("%f",&a[row][col]);
		}
		
	}
	printf("\n\n\n\n");
	
		for (row=0;row<2;row++)
	
	{
		
			for (col=0;col<2;col++)
			{
		
			printf("%2.f\t",a[row][col]);
			}	printf("\n");
		
	}
	
	printf("\n");
}
