#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int partition(int arr[],int lb,int ub)
{
int pivot=arr[lb];
int start=lb;
int end=ub;
while(start<end)
{
while(arr[start]<=pivot)
{
    start++;
}
while(arr[end]>pivot)
{
    end--;
}
if(start<end)
{
    swap(&arr[start],&arr[end]);
}
}
swap(&arr[lb],arr[end]);
return end;
}
void quicksort(int a[],int lb,int ub)
{
if(lb<ub)
{
    int loc=partition(a,lb,ub);
    quicksort(a,lb,loc-1);
    quicksort(a,lb+1,ub);

}
}
 void print(int arr[],int n)
 {
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
 }
int main()
{
    int arr[]={7,6,10,5,9,2,1,15,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    print(arr,n);
     return 0;
}
