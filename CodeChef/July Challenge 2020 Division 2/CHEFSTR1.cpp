// author : akashksinghal
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define input(A) for (auto &i : A) cin >> i;
void solve()
{
    int n, res = 0;
    cin >> n;
    vector<int> arr(n);
    input(arr);
    for (int i = 1; i < n; i++)
        res += abs(arr[i] - arr[i - 1]) - 1;
    cout << res << endl;
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