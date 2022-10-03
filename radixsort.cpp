#include<bits/stdc++.h>
using namespace std;
void countsort(int a[],int n,int exp)
{
    int b[n];int max=a[0],min=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
        if(min>a[i])
        min=a[i];
    }
    int range=10;
    int f[range];
    for(int i=0;i<10;i++)
    {
        f[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        f[a[i]/exp%10]++;
    }
    for(int i=1;i<range;i++)
    {
        f[i]=f[i]+f[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        int pos=f[a[i]/exp%10]-1;
        b[pos]=a[i];
        f[a[i]/exp%10]--;
    }
    for(int i=0;i<n;i++)
    {
        a[i]=b[i];
    }
}
void radixsort(int a[],int n)
{
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    int exp=1;
    while(max>=exp)
    {
        countsort(a,n,exp);
        exp=exp*10;
    }
}
int main()
{
    int n;
    cout<<"ENETR NUMBER OF VALUES : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    radixsort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
 return 0;
}