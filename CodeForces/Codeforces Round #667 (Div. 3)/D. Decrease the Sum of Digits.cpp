//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
ll Sum(ll n){
    ll sm = 0;
    while(n!=0){
        sm+=(n%10);
        n/=10;
    }
    return sm;
}
void solve()
{
    ll n,s, sum = 0,ans = 0;
    cin >> n >> s;
    if(Sum(n)<=s){
        cout << 0 << '\n';
        return;
    }
    ll pow = 1;
    for(int i=0;i<18;i++){
        int digit = (n/pow)%10;
        ll add = pow * ((10-digit)%10);
        n += add;
        ans += add;
        if (Sum(n) <= s) {
            break;
        }
        pow*=10;
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