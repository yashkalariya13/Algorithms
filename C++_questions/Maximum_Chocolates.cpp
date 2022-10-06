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
      
      sort(arr,arr+N);
      reverse(arr,arr+N);
      
      int sum=0;
      
      for(int i=0;i<N;i+=2){
        sum=sum+arr[i];
      }
      
      cout<<sum;
      cout<<endl;
      T--;
    }
    return 0;
  }