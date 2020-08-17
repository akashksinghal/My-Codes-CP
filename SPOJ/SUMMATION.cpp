// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
#define mod 100000007
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
void solve()
{
    ll n;
    cin>>n;
    ll ans = 0;
    vector<ll> A(n);
    input(A,n);
    ll tm = binpow(2,n-1,mod);
    map<ll,ll> mp;
    for(auto i:A) mp[i]++;
    for(auto i:mp){
        if(i.second!=0){
            ans += ((i.first*i.second)%mod)%mod;
        }
    }
    ans = ans%mod;
    ans = (ans*tm)%mod;
    cout<<ans%mod<<'\n';
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int testcase;
    cin>>testcase;
    for(int i=1;i<=testcase;i++)
    {
        cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}