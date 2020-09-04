//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    if(n==2){
        cout << x << ' ' << y ;
    }
    else{
        vector<ll> ans;
        ans.push_back(x);
        ans.push_back(y);
        ll m = abs(y-x), i = 1;
        ll k = 1;
        for(int i=1;i<=50;i++){
            if(ceil(m*1.0/i)==floor(m*1.0/i) and i<n){
                k = i;
            }
        }
        ll ji = m/k;
        // cout << ji <<' ';
        k--;
        // cout << k <<' ';
        ll val = x;
        for(int i=0;i<k;i++){
            ans.push_back(val + (ji*(i+1)));
        }
        // for(auto i:ans) cout << i << ' ';
        val = x-ji;
        while(val>0){
            if(ans.size()==n) break;
            ans.push_back(val);
            val-=ji;
        }
        val = y+ji;
        while(true){
            if(ans.size()==n) break;
            ans.push_back(val);
            val+=ji;
        }
        sort(ans.begin(),ans.end());
        for(auto i:ans) cout << i << ' ';
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