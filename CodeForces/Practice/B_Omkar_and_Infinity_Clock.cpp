//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n,k,maxi = INT32_MIN, mixi = INT32_MIN;
    cin >> n >> k;
    vector<ll> A(n);     
    for(auto &i:A) cin >> i, maxi = max(maxi,i);
    for(auto &i:A) i = maxi - i, mixi = max(i,mixi);
    if (k & 1){
        for(auto i:A) cout << i << ' ';
    }
    else{
        for(auto i:A) cout << mixi - i << ' ';
    }
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