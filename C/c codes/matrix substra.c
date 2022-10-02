#include <stdio.h>
void main()
{
int row,col;
   int a[2][2],addition;                       //2d dimensional array
	
	for (row=0;row<2;row++)
	{
		for (col=0;col<2;col++)
		{
			scanf("%d",&a[row][col]);
		}
		
	}
	printf("\n\n\n\n");
	
		for (row=0;row<2;row++)
	{
			for (col=0;col<2;col++)
			{
				printf("%d\t",a[row][col]);
			}
		printf("\n");
		
	}
	
	printf("\n");
	
	int b[2][2];                       //2d dimensional array
	
	for (row=0;row<2;row++)
	{
		for (col=0;col<2;col++)
		{
			scanf("%d",&b[row][col]);
		}
		
	}
	printf("\n\n\n\n");
	
		for (row=0;row<2;row++)
	{
			for (col=0;col<2;col++)
			{
				printf("%d\t",b[row][col]);
			}
		printf("\n");
		
	}
	
	printf("\n");
	

		printf("substraction is");
	
	printf("\n\n\n\n");
	
		for (row=0;row<2;row++)
	{
			for (col=0;col<2;col++)
			{
				printf("%d\t",a[row][col]-b[row][col]);
			}
		printf("\n");
    }
	
	
}
