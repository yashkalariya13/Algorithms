#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int X;
  cin>>X;
  int rev=0;
  while(X>0){
    rev=(rev*10)+X%10;
    X=X/10;
  }
  cout<<rev;
  return 0;
}