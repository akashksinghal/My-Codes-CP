// author : akashksinghal
// Partially Solved.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    vector<ll> A(n);
    input(A);
    vector<ll> B(n,1);
    for(ll i=n-2;i>=0;i--){
        B[i] = (B[i+1]*2)%mod;
    }
    for(auto i:B) cout << i <<' ';
    cout << '\n';
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