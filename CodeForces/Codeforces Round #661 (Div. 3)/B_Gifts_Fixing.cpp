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
    vector<ll> A(n), B(n);
    input(A);
    input(B);
    ll miniA = A[0], miniB = B[0];
    for (auto i : A)
        miniA = min(i, miniA);
    for (auto i : B)
        miniB = min(i, miniB);
    for (int i = 0; i < n; i++)
    {
        if (A[i] > miniA and B[i] > miniB) {
            ll k = min(A[i] - miniA, B[i] - miniB);
            A[i] -= k;
            B[i] -= k;
            ans += k;
        }
        if (A[i] > miniA) {
            ll k = A[i] - miniA;
            A[i] -= k;
            ans += k;
        }
        if (B[i] > miniB) {
            ll k = B[i] - miniB;
            B[i] -= k;
            ans += k;
        }
    }
    cout << ans << '\n';
}
signed main()
{
    fasino int testcase;
    cin >> testcase;
    while (testcase--)
    {
        solve();
    }
    return 0;
}