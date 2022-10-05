#include <bits/stdc++.h>
using namespace std;
void convertToSet(int arr[],int n){
  set<int> s;
  for(int i=0;i<n;i++){
    s.insert(arr[i]);
  }
}
int main()
{
  //write your code here
  int N;
  cin>>N;
  int arr[N];
  for(int i=0;i<N;i++){
    cin>>arr[i];
  }
  int uniq_count=0;
  for(int i=0;i<N;i++){
    if(count(arr,arr+N,arr[i])==1){
      uniq_count++;
    }
  }
  cout<<uniq_count;
  return 0;
}