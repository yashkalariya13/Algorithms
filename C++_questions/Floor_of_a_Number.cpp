#include <bits/stdc++.h>
using namespace std;
int floor_number(int arr[],int left,int right,int ele){
  int mid;
  while(left<=right){
    mid=(left+right)/2;
    if(arr[mid]==ele)
    return mid;
    if(arr[mid]<ele)
    return floor_number(arr,mid+1,right,ele);
    else
    return floor_number(arr,left,mid-1,ele);
  }
  return right;
}
int main()
{
  //write your code here
  int T;
  cin>>T;
  while(T>0){
    int N;
    cin>>N;
    int x;
    cin>>x;
    int A[N];
    for(int i=0;i<N;i++){
      cin>>A[i];
    }
  int index = floor_number(A,0,N-1,x);
  cout<<index;
  cout<<endl;
  T--;
  }
  return 0;
}