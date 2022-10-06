 
 #include <bits/stdc++.h>
using namespace std;
int main()
{int T;
cin>>T;
while(T>0)
{
  int N,M,a[10000][10000],i,j,max=0,c=0,p=0;
  cin>>N>>M;
  for(i=0;i<N;i++)
  { c=0;
    for(j=0;j<M;j++)
    {
      cin>>a[i][j];
      if(a[i][j]==1)
      c++;
    }
    if(c>0&&c>p){ p=c;
    max=i;}
  }(p>0?cout<<max<<"\n":cout<<"-1\n");
  
  T--;
}
  return 0;
}