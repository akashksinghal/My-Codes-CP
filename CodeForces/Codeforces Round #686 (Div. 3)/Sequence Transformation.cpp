//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> A(n);
    input(A);
    map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
        mp[A[i]].push_back(i);
    }
    if(mp.size()==1) cout << 0 << '\n';
    else{
        vector<ll> temp;
        ll ans = INT_MAX;
        ll breaks = 0;
        for(auto i:mp){
            auto K = i.second;
            int indx = 0;
            breaks = 0;
            for(int j=0;j<i.second.size();j++){
                    if(indx != K[j]){
                    breaks++;
                    indx = K[j]+1;
                }
                else{
                    indx = K[j]+1;
                }
            }
            if(indx!=n) breaks++;
            ans = min(breaks,ans);
        }
        cout << ans << '\n';
    }
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