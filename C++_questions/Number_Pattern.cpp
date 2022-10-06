#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int N;
    cin>>N;
    int i=5;
    while(i>=1){
      int j=1;
      while(j<=i){
        cout<<j<<" ";
        j++;
      }
      cout<<endl;
      i--;
    }
    return 0;
  }