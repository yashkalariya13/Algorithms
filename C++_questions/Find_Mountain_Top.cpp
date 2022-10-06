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
    cout<<*max_element(arr,arr+N);
    cout<<endl;
    T--;
  }
  return 0;
}