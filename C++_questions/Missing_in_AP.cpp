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
    int arr[N];
    for(int i=0;i<N;i++){
      cin>>arr[i];
    }
    for(int i=1;i<N;i++){
      int cd=arr[N-1]-arr[N-2];
      if(arr[i]-arr[i-1]!=cd){
        cout<<arr[i-1]+cd;
      }
    }
    cout<<endl;
    T--;
  }
  return 0;
}