//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        ll a = (i-1);
        ll b = (i+4);
        ll c = i*i - 3*i + 4;
        ll d = a*b*c;
        cout << (d>>1) << '\n';
    }
    return 0;
}