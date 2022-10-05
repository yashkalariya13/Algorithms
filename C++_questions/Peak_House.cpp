#include <bits/stdc++.h>
  using namespace std;
  int printIndex(int arr[],int n){
      if(arr[0]>=arr[1]){
        return 0;
      }
      if(arr[n-1]>=arr[n-2]){
        return n-1;
      }
      for(int i=1;i<n-1;i++){
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
          return i;
        }
      }
    }
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
      
      int ans = printIndex(arr,N);
      cout<<ans;
      cout<<endl;
      T--;
    }
    return 0;
  }