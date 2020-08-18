// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n;
    cin>> n;
    string A;
    cin>>A;
    map<char,ll> mp;
    for(auto i:A){
        mp[i]++;
    }
    bool flag = true;
    for(auto i:mp){
        // cout<<i.second<<" ";
        if(i.second&1) flag = false;
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
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