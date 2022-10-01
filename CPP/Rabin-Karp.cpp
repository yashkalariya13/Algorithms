#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define sz(x) x.size()
#define pb push_back
#define pb2 pop_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define bend(x) x.begin(), x.end()
#define vi vector<ll>
#define mapp map<ll, ll>
#define sett set<ll>
#define ve vector
#define un_m unordered_map<ll, ll>
#define f(i, a, b) for (i = a; i < b; i++)
#define f2(i, x) for (i = a.begin(); i != a.end(); i++)
#define maxxx INT32_MAX
#define mp make_pair
/*
const unsigned int moduli = 1000000007;
ll gcd(ll a, ll b)
{
   if (b == 0)
      return a;
   return gcd(b, a % b);
}
*/
/*
ll getIndex(vector<ll> v, ll K)
{
    auto it = find(v.begin(), v.end(), K);

    if (it != v.end()) {

        ll index = distance(v.begin(), it);
        return index;
    }

       return -1;

}
*/
/*
string d2b(ll N)
{

    // To store the binary number
    ll B_Number = 0;
    ll cnt = 0;
    while (N != 0) {
        ll rem = N % 2;
       ll c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;

        // Count used to store exponent value
        cnt++;
    } Pattern found at index 0

    return to_string(B_Number);
} */
void solution()
{

//   ll n,m,k;

   string aa,s,t;
   cin>>s>>t;
   aa=s;
   ll code=0,code2=0;
   ll l1=s.length();
   ll l2=t.length();
   vi v;
   s+="#";
   s+=t;
   //cout<<t<<" "<<t.length()<<endl;
   ll i,j,c,ans=0,tt,sum=0;
   ll pi[l1+1+l2];
    pi[0]=0;
   f(i,1,t.length()){
        tt=pi[i-1];
        while(tt>0 && t[i]!=t[tt])
            tt=pi[tt-1];

        if(t[i]==t[tt])
        tt++;

        pi[i]=tt;
   }
  
   ll cnt = 0, prev = 0;
   ll n=t.length();
/*   f(i,0,n)
   {
        tt=prev;
        while(tt>0 && s[i]!=s[tt])
            tt=pi[tt-1];
        if(s[i]==t[tt])
            tt++;
        prev=tt;
        if(tt==l2)
        {
            aa.pb(i+1);
            cnt++;
        }
   }*/

   for(i=0;i<sz(t);i++)
   {
        if(pi[i]==sz(s)) ans++;
   }
   cout<<ans;



}

// driver function
int main()
{
   //  fast I/O
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   ll tc=1;
   //cin >> tc;
   while (tc--)
   {
      solution();
      cout << endl;
   }

   return 0;
}
/*
ll power(ll x,ll y)
{
   //(x^y)%MOD
   ll ans=1,s=x;
   while(y){
      if(y&1){
         ans*=s;
         ans%=moduli;
      }
      s*=s;
      s%=moduli;
      y>>=1;
   }
   return ans;
}


*/
