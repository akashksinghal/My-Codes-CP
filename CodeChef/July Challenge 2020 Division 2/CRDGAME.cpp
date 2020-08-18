// author : akashksinghal
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fasino                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define input(A)      \
    for (auto &i : A) \
        cin >> i;
int digits(int n)
{
    int ans = 0;
    while (n != 0)
    {
        ans = ans + (n % 10);
        n = n / 10;
    }
    return ans;
}
void solve()
{
    int chef = 0, morthy = 0, num, ko, ok;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> ko >> ok;
        int k1 = digits(ko);
        int k2 = digits(ok);
        if (k1 > k2)
            chef++;
        else if (k1 == k2)
            chef++, morthy++;
        else
            morthy++;
    }
    if (chef > morthy)
        cout << 0 << " " << chef << '\n';
    else if (chef == morthy)
        cout << 2 << " " << chef << '\n';
    else
        cout << 1 << " " << morthy << '\n';
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