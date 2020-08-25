//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    string A, B;
    cin >> A;
    cin >> B;
    vector<ll> cnt(26, 0);
    for (auto i : A)
    {
        cnt[i - 'a']++;
    }
    for (auto i : B)
    {
        --cnt[i - 'a'];
    }
    string res = "";
    for (int i = 0; i < 26; i++)
    {
        while (cnt[i] != 0)
        {
            res += (char)('a' + i);
            --cnt[i];
        }
    }
    bool flag = false;
    sort(res.begin(), res.end());
    string ko = "", po = res;
    int pos = lower_bound(res.begin(), res.end(), B[0]) - res.begin();
    int pos2 = upper_bound(res.begin(), res.end(), B[0]) - res.begin();
    string final = B + res;
    for (int i = pos; i <= pos2; i++)
    {
        string k = string(res.begin(), res.begin() + i);
        string p = string(res.begin() + i, res.end());
        final = min(final, k + B + p);
    }
    cout << final;
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