#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int T;
  cin>>T;
  while(T>0){
    int N;
    int K;
    cin>>N>>K;
    int arr[N];
    for(int i=0;i<N;i++){
      cin>>arr[i];
    }
    int low_count=0;
    int equal_count=0;
    int high_count=0;
    for(int i=0;i<N;i++){
      if(arr[i]<K){
        low_count++;
      }
      if(arr[i]==K){
        equal_count++;
      }
      if(arr[i]>K){
        high_count++;
      }
    }
    cout<<low_count<<" "<<high_count<<" "<<equal_count;
    cout<<endl;
    T--;
  }
  return 0;
}