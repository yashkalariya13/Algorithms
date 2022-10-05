#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
  //write your code here
  int N;
  cin>>N;
  while(N>0){
    string S;
    cin>>S;
    cout<<endl;
    string T;
    cin>>T;
    sort(S.begin(),S.end());
    sort(T.begin(),T.end());
    if(S==T){
      cout<<"YES";
    }else{
      cout<<"NO";
    }
    N--;
  }
  return 0;
}