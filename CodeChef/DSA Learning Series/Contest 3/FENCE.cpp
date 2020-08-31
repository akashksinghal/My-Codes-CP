//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll N, M, K, x, y, cost = 0;
    cin >> N >> M >> K ;
    map<pair<ll,ll>, int> mp;
    for (ll i = 0; i < K; i++) {
        cin >> x >> y ;
        mp[{x,y}]=1;
    }
    map<pair<ll,ll>, int> pm = mp;
    for(auto i:pm){
        ll x = i.first.first, y = i.first.second;
        cost += 4;
        cost -= (mp[{x+1,y}]);
        cost -= (mp[{x-1,y}]);
        cost -= (mp[{x,y+1}]);
        cost -= (mp[{x,y-1}]);
    }
    cout << cost << '\n';
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