#include <bits/stdc++.h>
#include <cmath>
using namespace std;
void printJuggler(int n){
  long long a=n;
  cout<<a<<" ";
  while(a!=1){
    long long b=0;
    if(a%2==0){
      b=floor(sqrt(a));
    }else{
      b=floor(sqrt(a)*sqrt(a)*sqrt(a));
    }
    cout<<b<<" ";
    a=b;
  }
}
int main()
{
  //write your code here
  int T;
  cin>>T;
  while(T>0){
    int N;
    cin>>N;
    printJuggler(N);
    cout<<endl;
    T--;
  }
  return 0;
}