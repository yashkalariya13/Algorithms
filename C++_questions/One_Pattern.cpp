#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int N;
    cin>>N;
    if(N==1){
    int i=1;
    while(i<=5){
      int j=1;
      while(j<=i){
        cout<<1<<" ";
        j++;
      }
      cout<<endl;
      i++;
    }
    }
    return 0;
  }