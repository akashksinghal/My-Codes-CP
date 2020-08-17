// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int n,k;
    cin>>n>>k;
    vector<int> A(n);
    input(A,n);
    vector<ll> dp(n,INT32_MAX);
    dp[0]=0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(i-j>=0){
                dp[i] = min(dp[i],dp[i-j] + abs(A[i-j]-A[i]));
            }
        }
    }
    cout<<dp[n-1];
    return 0;
}