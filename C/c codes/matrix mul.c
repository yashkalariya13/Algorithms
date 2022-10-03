#include <stdio.h>
void main()
{
int row,col;
   int a[2][2],b[2][2],c[col][row],k;                       //2d dimensional array
	
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
	

		printf("multiplication is");
	
	printf("\n\n\n\n");

		for (row=0;row<2;row++)
	{
			for (col=0;col<2;col++)
			{
				c[row][col]=0;
					
					for (k=0;k<2;k++)	
					{
						c[row][col] = c[row][col] + (a[row][k]*b[k][col]);	
					}
				printf("%d\t",c[row][col]);
			}
		printf("\n");
    }
	
	
}
