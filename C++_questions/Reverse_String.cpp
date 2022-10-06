#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int T;
  cin>>T;
  while(T>0){
    int N;
    cin>>N;
    char arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    reverse(arr,arr+N);
    for(int i=0;i<N;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    T--;
  }
  return 0;
}