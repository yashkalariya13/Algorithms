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
    if(N==1){
      cout<<2<<endl;
    }
    else{
      cout<<N+1<<endl;
    }
    T--;
  }
  return 0;
}