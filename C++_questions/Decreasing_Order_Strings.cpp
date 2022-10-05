#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int T;
    cin>>T;
    while(T>0){
      string S;
      cin>>S;
      int counter=1;
      while(counter<S.length()){
        for(int i=0;i<S.length()-counter;i++){
          if(S[i]<S[i+1]){
            char temp=S[i];
            S[i]=S[i+1];
            S[i+1]=temp;
          }
        }counter++;
      }
      cout<<S;
      cout<<endl;
      T--;
    }
    return 0;
  }