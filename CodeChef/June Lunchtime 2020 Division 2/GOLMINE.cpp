// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
void solve()
{
    ll n;
    cin>>n;
    long double a=0.0,b=0.0,g,ai,bi;
    vector<vector<double> > A;
    while(n--){
        cin>>g>>ai>>bi;
        long double k = g/(ai+bi);
        a += ai*k;
        b += bi*k; 
    }
    cout<<fixed<<setprecision(6)<<b<<' ';
    cout<<fixed<<setprecision(6)<<a<<'\n';
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