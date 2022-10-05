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
      int count=0;
      for(int i=0;i<str.length();i++){
        if(str[i]=='5'){
          count++;
        }
      }
      cout<<count;
      cout<<endl;
      T--;
    }
    return 0;
  }