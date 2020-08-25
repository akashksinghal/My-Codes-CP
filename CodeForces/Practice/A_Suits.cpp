//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll a,b,c,d,e,f, ans = 0;
    cin >> a >> b >> c >> d >> e >> f;
    if(e>f){
        ans = min(a,d)*e;
        d-=min(a,d);
        ans += min({b,c,d})*f;
    }
    else{
        ans = min({b,c,d})*f;
        d -= min({b,c,d});
        ans += min(a,d)*e;
    }
    cout << ans << '\n';
    return 0;
}