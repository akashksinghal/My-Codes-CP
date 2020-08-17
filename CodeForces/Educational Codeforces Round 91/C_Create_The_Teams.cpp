// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
void solve()
{
    ll n,x, cnt = 0,mini, ans =0;
    cin>>n>>x;
    vector<ll> A(n);
    input(A);
    dsc(A);
    for(ll i=0;i<n;i++){
        cnt++;
        mini = A[i];
        if(cnt*mini>=x){
            cnt = 0;
            ans++;
        }
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