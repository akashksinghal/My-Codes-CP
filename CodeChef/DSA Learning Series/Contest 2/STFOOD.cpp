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
    vector<ll> S(n), V(n), P(n);
    for(int i=0;i<n;i++){
        cin >> S[i] >> P[i] >> V[i];
    }
    ll maxi = 0;
    for(int i=0;i<n;i++){
        maxi = max((P[i]/(S[i]+1))*V[i], maxi);
    }
    cout << maxi << '\n';
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