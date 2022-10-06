#include <bits/stdc++.h>
#include <string>
  using namespace std;
  
  int main()
  {
    //write your code here
    int T;
    cin>>T;
    while(T>0){
      string S;
      cin>>S;
      int vowel_count=0;
      int cons_count=0;
      for(int i=0;i<S.length();i++){
        if(S[i]=='A' || S[i]=='E' || S[i]=='I' || S[i]=='O' || S[i]=='U'){
          vowel_count++;
        }else{
          cons_count++;
        }
      }
      cout<<vowel_count<<" "<<cons_count;
      cout<<endl;
      T--;
    }
    return 0;
  }