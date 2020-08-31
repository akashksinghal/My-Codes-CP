//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n,k;
    cin >> n >> k;
    vector<ll> A(n);
    input(A);
    ll sum = 0, ans = 1;
    for(auto i:A){
        if(i>k){
            cout << -1 <<'\n';
            return;
        }
        sum+=i;
        if(sum>k){
            ans+=1;
            sum = i;
        }
    }
    cout << ans << '\n';
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