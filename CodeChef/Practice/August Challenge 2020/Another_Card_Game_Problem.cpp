// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll Pc, Pr, c,r;
    cin >> Pc >> Pr;
    c = ceil(Pc/9.0);
    r = ceil(Pr/9.0);
    if ( c < r ) cout << 0 << " " << c << '\n';
    else cout << 1 << " " << r << '\n';
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