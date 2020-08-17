// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n,i, ans =0;
    cin>>n;
    vector<ll> A(n);
    for(ll i=0;i<n;i++){
        cin>>A[i];
    }
    // if(is_sorted(A.begin(),A.end())) {cout<<0<<'\n';return;}
    i  = n-2;
    while(A[i]>=A[i+1] and i>0) i--;
    while(A[i]>=A[i-1] and i>0) i--;
    cout<<max(i,0LL)<<'\n';
}
signed main()
{
    fasino
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}