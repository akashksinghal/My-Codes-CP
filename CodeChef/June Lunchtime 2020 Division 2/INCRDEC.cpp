// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n, maxi = INT16_MIN, cnt = 0;
    cin>>n;
    vector<ll> A(n);
    input(A);
    asc(A);
    map<ll, ll> mp;
    for (auto i : A)
    {
        mp[i]++;
        if(mp[i]>=3){
            cout<<"NO\n";
            return;
        }
        maxi = max(i,maxi);
        cnt = mp[maxi];
    }
    if(cnt==1){
        cout<<"YES\n"; ll i=0;
        vector<ll> ans(n);
        for(ll j=0;j<n;j+=2){
            ans[i]=A[j];
            ans[n-i-1]=A[j+1];
            i++;
        }
        if(n&1) ans[n/2]=maxi;
        for(auto i:ans) cout<<i<<" ";
        cout<<'\n';
    }    
    else{
        cout<<"NO\n";
    }
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