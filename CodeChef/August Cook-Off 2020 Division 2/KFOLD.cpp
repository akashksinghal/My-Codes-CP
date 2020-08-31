//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
 
void solve()
{
    ll n,k;
    cin >> n >> k;
    string A;
    cin >> A;
    int one(0), zero(0);
    for(auto i:A) {
        i=='1'?one++:zero++;
    }
    if (one % (n / k) != 0 or zero % (n / k) != 0) {
        cout << "IMPOSSIBLE\n";
        return;
    }
    string res = "", ko = "", ans = "";
    int ONE = one/(n/k), ZERO = zero/(n/k);
    for(int i=0;i<ZERO;i++) res+='0';
    for(int i=0;i<ONE;i++) res+='1';
    ko = string(res.rbegin(),res.rend());
    for(int i=0;i<n/k;i++){
        if(i&1) ans+=ko;
        else ans+=res;
    }
    cout << ans << '\n';    
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