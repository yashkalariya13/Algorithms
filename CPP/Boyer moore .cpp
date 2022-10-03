#include <bits/stdc++.h>
using namespace std;

map<char,int>ComputeLast(string p)
{
	map<char,int>mp;
	for(int i=0;i<p.length();i++)
	{
		mp[p[i]]=i;
	}
	return mp;
}
  

bool BoyerMoore(string txt, string pat) 
{ 
    int m = pat.size(); 
    int n = txt.size(); 
  
    map<char,int>mp=ComputeLast(pat);
  
    int s = 0; 
    while(s <= (n - m)) 
    { 
        int j = m - 1; 
  
       
        while(j >= 0 && pat[j] == txt[s + j])  j--; 
    
        if (j < 0) 
        { 
            cout << "MATCH FOUND AT " <<  s << endl; 
			return true;
            // s += (s + m < n)? m-mp[txt[s + m]] : 1; 
  
        } 
  
        else
         
        {
         	
         	if(mp[j]==0)s += max(1, j -mp[txt[s + j]]-1); 
         	else s += max(1, j -mp[txt[s + j]]); 
        }
           
    } 
} 
  
int main() 
{ 
    // string s= "ABACDC"; 
    // string pattern = "CDC"; 
    string s,pattern;
    cin>>s;
    cin>>pattern;
    BoyerMoore(s, pattern); 
    return 0; 
} 
