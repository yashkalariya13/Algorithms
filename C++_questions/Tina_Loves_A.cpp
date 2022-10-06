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
    int count_a=0;
    for(int i=0;i<S.length();i++){
      if(S[i]=='a'){
        count_a++;
      }
    }
    if(count_a>(S.length()/2)){
      cout<<S.length();
    }else{
      cout<<((count_a-1)*2)+1;
    }
    cout<<endl;
    T--;
  }
  return 0;
}