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
      int product=1;
      for(int i=0;i<N;i++){
        product*=arr[i];
      }
      cout<<product;
      cout<<endl;
      T--;
    }
    return 0;
  }