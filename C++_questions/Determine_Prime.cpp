#include <bits/stdc++.h>
using namespace std;

int main()
{int T;
cin>>T;
while(T>0)
{
  int N,i,c=0;
  cin>>N;
  if(N==2)
  cout<<"Yes\n";
  else if(N==1)
  cout<<"No\n";
  else
  {for(i=2;i<N;i++)
  {
    if(N%i==0)
    {
      c++;
      cout<<"No\n";
      break;
    }
  }if(c==0)
  cout<<"Yes\n";}
  T--;
}
  return 0;
}