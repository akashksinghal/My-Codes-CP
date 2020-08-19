//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n, ans = 1;
    cin >> n;
    vector<ll> A(n);
    input(A);
    for(int i=1;i<n;i++){
        if(A[i-1]>=A[i]) ans++;
        else A[i] = A[i-1];
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