#include <bits/stdc++.h>
using namespace std;
int linear_search(int arr[],int length,int ele){
  for(int i=0;i<length;i++){
    if(arr[i]==ele)
    return i;
  }
  return -1;
}
int main()
{
  //write your code here
  int T;
  cin>>T;
  while(T>0){
    int N;
    int K;
    cin>>N>>K;
    int A[N];
    for(int i=0;i<N;i++){
      cin>>A[i];
    }
    int ans=linear_search(A,N,K);
    cout<<ans;
    cout<<endl;
    T--;
  }
  return 0;
}