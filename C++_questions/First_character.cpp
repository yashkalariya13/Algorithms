#include <bits/stdc++.h>
#include <string>
  using namespace std;
 int countString(string str){
   for(int i=0;i<str.length();i++){
     if(count(str.begin(),str.end(),str[i])==1){
       return i;
     }
   }
   return -1;
 } 
  int main()
  {
    //write your code here
    int T;
    cin>>T;
    while(T>0){
      string S;
      cin>>S;
      int index = countString(S);
      cout<<index;
      cout<<endl;
      T--;
    }
    return 0;
  }