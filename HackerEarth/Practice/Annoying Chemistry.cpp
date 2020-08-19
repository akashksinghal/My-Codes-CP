#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) scanf("%lld",&A[i]);
void solve()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll x,y,z;
    ll i,j,k;
    i = (a*c)/__gcd(a,c);
    j = (b*d)/__gcd(b,d);
    k = (i*j)/__gcd(i,j);
    z = k;
    y = (z*d)/b;
    x = (z*c)/a;
    ll O = __gcd(x,y);
    O = __gcd(O,z);
    cout<<(x/O)<<" "<<(y/O)<<" "<<(z/O)<<endl;
}
int main()
{
    solve();
    return 0;
}