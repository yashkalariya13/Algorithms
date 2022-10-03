#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,low=0,high,mid,item;
clrscr();
printf("Enter the number of elements in the array);
scanf("%d",&n);
printf("Enter the elements in the array");
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
printf("Enter the element to be searched");
scanf("%d",&item);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(item==a[mid])
{
printf("The element is found at position %d",mid+1);
break;
}
else if(item<a[mid])
  high=--mid;
else
  low=++mid;
}
if(low>high)
  printf("The element is not found");
getch();
}
