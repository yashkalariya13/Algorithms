#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int N;
  cin>>N;
  int ti;
  int ci;
  int k;
  int m=0;
  int count=0;
  while(N>0){
    cin>>ti>>ci;
    k=ci-ti;
    if(k>=2){
      m++;
    }
    N--;
  }
  cout<<m;
  return 0;
}