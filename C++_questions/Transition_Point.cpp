#include <bits/stdc++.h>
int printOne(int arr[],int n){
  for(int i=0;i<n;i++){
    if(arr[i]==1){
      return i;
    }
  }
  return -1;
}
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
      int ans = printOne(arr,N);
      cout<<ans;
      cout<<endl;
      T--;
    }
    return 0;
  }