// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
void solve()
{
    ll n, b1, b2;
    cin >> n >> b1 >> b2;
    if(b1>b2) swap(b1,b2);
    ll ans = 0;
    for(int i=1;i<=n;i++){
        if(i!=b1 and i+1!=b2 and i+1!=b1 and i!=b2){
            ans += (n-4);
        }
    }
    if(1!=b1 and n!=b2){
        ans += (n-4);
    }
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