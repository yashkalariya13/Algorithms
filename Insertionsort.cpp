 // code of the insertion sort
#include<bits/stdc++.h>
using namespace std;
  int main()
 {
     int n;
     cout<<"Enter the size of the array you want to sort"<<endl;;
     cin>>n;
     int arr[n];
     cout<<"Enter the elements of the array"<<endl;;
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     int j,temp=0;
     for(int i=1;i<n;i++)
     {
         temp=arr[i];
         j=i-1;
         while(j>=0&&arr[j]>temp)
         {
             arr[j+1]=arr[j];
             j--;
         }
         arr[j+1]=temp;
     }
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }

    return 0;
 }
