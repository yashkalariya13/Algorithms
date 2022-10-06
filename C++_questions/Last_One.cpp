#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;
cin>>T;
while(T>0)
{
  int i, N,a[10000000];
  cin>>N;
  for(i=1;i<=N;i++)
  {
    cin>>a[i];
  }
  for(i=N;i>0;i--)
  {
    if(a[i]==1)
    break;
  }
  cout<<i-1<<"\n";
  T--;
}
  return 0;
}