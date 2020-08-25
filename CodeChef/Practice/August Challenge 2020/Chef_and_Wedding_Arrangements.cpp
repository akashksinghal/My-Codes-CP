//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n, k, cost = 0, tabs = 1;
    cin >> n >> k;
    vector<ll> A(n), table(101, 0);
    for (auto &i : A){
        cin >> i;
        table[i]++;
    }
    map<int, int> tab;
    for (auto i : A){
        if (!tab[i]){
            tab[i]++;
        }
        else{
            tab.clear();
            tabs++;
            tab[i]++;
        }
    }
    ll conflicts = 0;
    for (auto i : table){
        if (i > 1){
            conflicts += i;
        }
    }
    ll temp = min(conflicts + k, tabs * k);
    for (int i = 0; i < n; i++)
    {
        ll k1 = 0, k2 = 0;
        map<int, int> mp1, mp2;
        for (int k = 0; k <= i; k++){
            mp1[A[k]]++;}
        for (int k = i + 1; k < n; k++){
            mp2[A[k]]++;
        }
        for (auto [i, j] : mp1)
            if (j > 1)
                k1 += j;
        for (auto [i, j] : mp2)
            if (j > 1)
                k2 += j;
        temp = min(temp, 2 * k + k1 + k2);
    }
    cout << temp << '\n';
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