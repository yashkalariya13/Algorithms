#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T;
cin>>T;
while(T>0)
{int N,a[100000000],i,c=0,j,s=0;
  cin>>N;
  for(i=1;i<N;i++)
  {cin>>a[i];
    s+=a[i];
    c+=i;
  } c+=N;
  cout<<c-s<<"\n";
  T--;
}return 0;
}