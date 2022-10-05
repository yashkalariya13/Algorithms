#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{if (a == 0)
       return b;
if (b == 0)
       return a;
 if (a == b)
        return a;
 if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main()
{ int T;
cin>>T;
while(T>0)
{
  int N,M;
  cin>>N>>M;
 cout<<gcd(N,M)<<"\n";
  T--;
}
  return 0;
}