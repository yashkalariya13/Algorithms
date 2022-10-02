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
#define in(t) scanf("%lld",&t) 
#define out(t) printf("%lld",t) 

const unsigned int moduli = 1000000007;


void sol()
{
    ll d=0,ds,e=0,x,n,k;
    ll i,j,tt=0,t;
    ll cnt=0,sum=0;
    
    cin>>n>>x;
    ll a[n];
    f(i,0,n) cin>>a[i];

    ll dp[x+1];
    
    f(i,0,x+1) dp[i]=INT_MAX;

    dp[0]=0;
    f(i,1,n+1)
    {
        f(j,0,x+1) 
        {
            if(j-a[i-1] >= 0)
                dp[j]=min( dp[j-a[i-1]] + 1 , dp[j]);
        }
    }
    if(dp[x]==INT_MAX) cout<<-1;
    else cout<<dp[x];
}

// driver function
int main()
{
    ll tc;
   // cin >> tc;
   // while (tc--)
  //  {
        sol();
        cout << endl;
   // }

   return 0;
}