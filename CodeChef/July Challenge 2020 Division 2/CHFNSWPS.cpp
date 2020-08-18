// author : akashksinghal
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
// void print(vector<ll> &vec)
// {
//     for (auto i : vec)
//         cout << i << ' ';
//     cout << '\n';
// }
void solve()
{
    ll n;
    cin >> n;
    bool flag = true;
    ll ans = 0, anus = (ll)1e10; // lets check how small is it... ^_____^  :)
    vector<ll> A1, B1;
    unordered_map<ll, ll> ai, bi, ab;
    for (ll p = 0, i; p < n; p++)
        cin >> i, ai[i]++, anus = min(i, anus), ab[i]++;
    for (ll p = 0, i; p < n; p++)
        cin >> i, bi[i]++, anus = min(i, anus), ab[i]++;
    for (auto &[i, j] : ab)
    {
        if (j & 1)
        {
            cout << -1 << '\n';
            return;
        }
        else
            j /= 2;
    }
    assert(flag == true);
    for (auto &[i, j] : ai)
    {
        if (j > ab[i])
        {
            for (int k = 0; k < (j - ab[i]); k++)
                A1.pb(i);
        }
    }
    for (auto &[i, j] : bi)
    {
        if (j > ab[i])
        {
            for (int k = 0; k < (j - ab[i]); k++)
                B1.pb(i);
        }
    }
    asc(A1);
    dsc(B1);
    // print(A1);
    // print(B1);
    assert(A1.size() == B1.size());
    for (ll i = 0; i < A1.size(); i++)
        ans += min(2 * anus, min(A1[i], B1[i]));
    cout << ans << '\n';
    return;
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