#include <bits/stdc++.h>
using namespace std;

void powerSet(string s,string cur = "",int index = -1){
  int n = s.size();
  if(index == n)
    return ;
  cout<<cur<<"\n";

  for(int i = index+1; i<n; i++){
    cur += s[i];
    powerSet(s,cur,i);
    /* After all subset beginning with "cur" are printed,
      we will remove the last character to consider different 
      prefix of subsets */
    cur = cur.erase(cur.size()-1);
  }
}
int main()
{
  string str;cin>>str;
  sort(str.begin(),str.end());
  powerSet(str);

  return 0;
}