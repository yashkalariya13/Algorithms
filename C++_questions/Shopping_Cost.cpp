#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int N;
  cin>>N;
  while(N>0){
    float q;
    float p;
    float r;
    float m;
    cin>>q>>p;
    if(q>100){
      r=p*0.2*q;
      m=p*q-r;
      cout<<fixed<<setprecision(1)<<m<<endl;
    }else{
      r=p*q;
      cout<<fixed<<setprecision(1)<<r<<endl;
    }
    N--;
  }
  return 0;
}