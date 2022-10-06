#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int T;
    cin>>T;
    while(T>0){
      string D;
      string S;
      cin>>D;
      cin>>S;
      string word="";
      
      for(int i=0;i<D.length();i++){
        for(int j=0;j<S.length();j++){
          if(D[i] == S[j]){
            word+=D[i];
          }
        }
      }
      cout<<word;
      cout<<endl;
      T--;
    }
    return 0;
  }