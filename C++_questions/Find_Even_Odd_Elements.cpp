#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
      cin>>arr[i];
    }
    for(int i=0;i<N;i++){
      if(arr[i]%2==0){
        cout<<arr[i]<<" ";
      }
    }
    cout<<endl;
    for(int i=0;i<N;i++){
      if(arr[i]%2!=0){
        cout<<arr[i]<<" ";
      }
    }
    return 0;
  }