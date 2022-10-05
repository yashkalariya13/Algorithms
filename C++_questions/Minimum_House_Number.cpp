#include <bits/stdc++.h>
#include <iostream>
  using namespace std;
  
  int main()
  {
    //write your code here
    int T;
    cin>>T;
    while(T>0){
      int N;
      cin>>N;
      int min=INT_MAX;
      int index=-1;
      int arr[N];
      for(int i=0;i<N;i++){
        cin>>arr[i];
      }
      for(int i=0;i<N;i++){
        if(arr[i]<min){
          min=arr[i];
          index=i;
        }
      }
      cout<<index;
      cout<<endl;
      T--;
    }
    return 0;
  }