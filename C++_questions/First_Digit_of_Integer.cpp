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
      string str=to_string(N);
      cout<<str[0];
      cout<<endl;
      T--;
    }
    return 0;
  }