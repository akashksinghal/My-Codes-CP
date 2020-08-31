//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n, ans = 0;
    cin >> n;
    vector<ll> A(n);
    input(A);
    vector<ll> left(3001,0);
    for (int j = 0; j < n; j++) {
        vector<ll> right(3001,0);
        for (int k = n - 1; k > j; k--) {
            ans += ( left[A[k]] * right[A[j]] );
            right[A[k]]++;
        }
        left[A[j]]++;
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