// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
void solve()
{
    ll am, n,ans = 0;
    cin >> am >> n;
    if(am&1) am--, ans++;
    if(n>am) n = am;
    while(am>1 and n>0){
        ans += (am/n);
        am = am%n;
        n-=2;
        n = min(n,am);
        if(n&1) n--;
        if(am&1) am--, ans++;
    }
    if(am&1) am--, ans++;
    cout<<ans<<'\n';
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