// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A) for(auto &i:A) cin>>i;
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a ;
        b >>= 1;
    }
    return res;
}
bool cmp(pair<ll,ll> x, pair<ll, ll> y)
{
    if (x.first > y.first)
        return true;
    else if (x.first == y.first)
        if (x.second < y.second)
            return true;
    return false;
}
void solve()
{
    ll n, k, ans = 0;
    cin>>n>>k;
    vector<ll> A(n), B(33,0);
    for(auto &i:A) cin>>i;
    for(auto i:A){
        int cnt = 0;
        while(i){
            if(i&1) B[cnt]++;
            i>>=1LL;
            cnt++;
        }
    }    
    vector<pair<ll,ll>> bin;
    for(ll i=0;i<33;i++){
        bin.push_back({B[i]*binpow(2,i),i});
    }
    sort(bin.begin(),bin.end(),cmp);
    for(int i=0;i<k;i++){
        ans += binpow(2,bin[i].second);
    }
    cout<<ans<<'\n';
}
signed main()
{
    fasino
    ll testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}