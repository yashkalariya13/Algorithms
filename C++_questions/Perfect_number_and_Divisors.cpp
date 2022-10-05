#include <bits/stdc++.h>
using namespace std;
int main()
{ int T;
cin>>T;
while(T>0)
{ int N,s=0;
cin>>N;
for(int i=1;i<N;i++)
{
  if(N%i==0)
  s+=i;
}(s==N?cout<<"true\n":cout<<"false\n");
  T--;
}
  return 0;
}