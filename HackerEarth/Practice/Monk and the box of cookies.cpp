// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    ll n,tm;
    cin>>n;
    int ans[32]={0};
    for(ll i=0;i<n;i++){
        cin>>tm;
        for(int k=0;k<31;k++){
            if((1<<k)&tm) ans[k]++;
        }
    }
    int maxi = ans[0];
    for(int i=1;i<32;i++){
        // cout<<ans[i]<<" ";
        maxi = max(maxi,ans[i]);
    }
    for(int i=0;i<32;i++) if(maxi==ans[i]){
        cout<<i<<'\n';
    }
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}