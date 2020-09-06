//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> A(n);
    input(A);
    ll sum = 0;
    for(auto &i:A){
        if(i>=0){
            sum+=i;
            i=0;
        }
        else{
            ll op = min(abs(i),sum);
            i-=op;
            sum-=op;
        }
    }
    ll ji =0;
    // for(auto i:A) ji+=i;
    cout << sum <<'\n';
    // cout << sum/2 << '\n';
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