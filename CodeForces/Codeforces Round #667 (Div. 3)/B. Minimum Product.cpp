//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll a,b,x,y,n;
    cin >> a >> b >> x >> y >> n;
    ll A = a, B = b, X = x, Y = y, N = n;
    ll j1, j2;
    ll k = min(b-y,n);
    b-=k;
    n-=k;
    a-=min(a-x,n);
    j1 = a*b;
    // cout << j1 << ' ';
    ll K = min(A-x,N);
    A-=K;
    N-=K;
    B-=min(B-Y,N);
    j2 = A*B;
    // cout << j2 <<' ';
    cout << min(j1,j2) << '\n';
    
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