// I'm a f*cking looser
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define asc(A) sort(A.begin(), A.end())
#define dsc(A) sort(A.begin(), A.end(), greater<ll>())
#define input(A, N)            \
    for (ll i = 0; i < N; i++) \
        cin >> A[i];
int main()
{
    fasino
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
#endif
    int a, c;
    cin >> a;
    vector<int> A(a);
    input(A, a);
    asc(A);
    cin >> c;
    vector<int> C(c);
    input(C, c);
    asc(C);
    map<int, int> mp;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if ((C[j] - A[i]) > 0 && (C[j] - A[i]) <= 100)
                mp[C[j] - A[i]]++;
        }
    }
    int p, l;
    for (auto it:mp)
    {
        p = it.first;
        l = it.second;
        // cout<<p<<" "<<l<<"\n";
        if (l == a)
            cout << p << " ";
    }
    return 0;
}