#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int M;
    int N;
    cin>>M;
    cin>>N;
    int K;
    cin>>K;
    int arr[M][N];
    for(int i=0;i<M;i++){
      for(int j=0;j<N;j++){
        cin>>arr[i][j];
      }
    }
    for(int i=0;i<M;i++){
      for(int j=0;j<N;j++){
        arr[i][j]*=K;
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
    return 0;
  }