#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, j = 0, i = 0, k, uni = 0;
    long long ans = 0;
    cin >> n >> k;
    vector<long long> A(n);
    map<long long, long long> mp;
    for (auto &i : A) cin >> i;
    while (i < n) {
        if (mp[A[i]] == 0) uni++;
        mp[A[i]]++;
        while (uni > k) {
            mp[A[j]]--;
            if (mp[A[j]] == 0) uni--;
            j++;
        }
        if (uni <= k) {
            ans += (i - j + 1);
        }
        i++;
    }
    cout << ans;
}