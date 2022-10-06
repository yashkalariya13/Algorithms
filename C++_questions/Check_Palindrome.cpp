#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  //write your code here
  int T;
  cin>>T;
  while(T>0){
    int N;
    cin>>N;
    int rev=0;
    int x=N;
    while(N>0){
      rev=(rev*10)+(N%10);
      N=N/10;
    }
    if(x==rev){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
    T--;
  }
  return 0;
}