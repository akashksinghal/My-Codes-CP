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
    ll mini = A[0], res = A[0];
    for (ll i = 1; i < n; i++)
    {
        mini = min(mini, A[i]);
        res += mini;
    }
    cout << res << '\n';
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