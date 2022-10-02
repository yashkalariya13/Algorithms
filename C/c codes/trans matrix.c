#include <stdio.h>
void main()
{
int row,col;
   int a[3][3],addition;                       //2d dimensional array
	
	for (row=0;row<3;row++)
	{
		for (col=0;col<3;col++)
		{
			scanf("%d",&a[row][col]);
		}
		
	}
	printf("\n\n\n\n");
	
		for (row=0;row<3;row++)
	{
			for (col=0;col<3;col++)
			{
				printf("%d\t",a[row][col]);
			}
		printf("\n");
		
	}
	
	printf("transpose of matrix is");
	
	printf("\n\n\n\n");
	
		for (row=0;row<3;row++)
	{
			for (col=0;col<3;col++)
			{
				printf("%d\t",a[col][row]);
			}
		printf("\n");
		
	}
	
}
