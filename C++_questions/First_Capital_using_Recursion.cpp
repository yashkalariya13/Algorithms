#include <bits/stdc++.h>
using namespace std;
int fc(char s[],int i)
{ if(s[i]!='\0')
  {if(s[i]>='A'&&s[i]<='Z')
    return i;
  else
    return  fc(s,i+1);
  }
  return -1;
}
int main()
{int T;
cin>>T;
while(T>0)
{char s[10000];
int N,i=0;
cin>>s;
N=fc(s,i);
cout<<N<<"\n";
  T--;
}return 0;
}