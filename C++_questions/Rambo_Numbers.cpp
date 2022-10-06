#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int T;
  cin>>T;
  while(T>0){
    int r;
    int p;
    int q;
    cin>>r>>p>>q;
    int count=0;
    for(int i=p;i<=q;i++){
      if(i%r==0){
        count++;
      }
    }
    cout<<count;
    cout<<endl;
    T--;
  }
  return 0;
}