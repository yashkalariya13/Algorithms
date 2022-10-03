#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll ar[100009],st[400009];

void build(ll segIndex, ll segSt, ll segEn){
    if(segSt== segEn){
        st[segIndex]= ar[segSt];
        return;
    }
    ll mid= (segSt + segEn)/2;
    build(segIndex*2, segSt, mid);
    build(segIndex*2 +1, mid+1, segEn);

    st[segIndex]=min(st[segIndex*2], st[segIndex*2 +1]);
}

ll query(ll segIndex, ll segSt, ll segEn, ll qSt, ll qEn){
    if(qSt> segEn || qEn < segSt) return INT_MAX;  // if seg is out of query range

    if(qSt<= segSt && qEn >= segEn)  //4---6 query and we r in segg 2-3 then we return value of 2-3 completely
        return st[segIndex];

    ll mid= (segSt + segEn)/2;
    return min(query(segIndex*2, segSt, mid, qSt, qEn), query(segIndex*2 +1, mid+1, segEn, qSt, qEn));

}

int main() {
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++)
         cin>>ar[i];

    build(1,1,n);

    ll q;
    cin>>q;
    while(q--){
        ll l,r;
        cin>>l>>r;
        cout<<query(1,1,n,l+1,r+1)<<endl;
    }


    return 0;
}
