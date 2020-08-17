// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n;
    cin>>n;
    vector<ll> A(2*n);
    input(A);
    set<ll> B;
    vector<ll> ans;
    for(auto i:A){
        if(B.find(i)==B.end()){
            ans.push_back(i);
            B.insert(i);
        }
    }
    for(auto i:ans) cout<<i<<' ';
    cout<<'\n';
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