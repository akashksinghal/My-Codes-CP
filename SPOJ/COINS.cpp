// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
#define N 100001
ll DP[N];
void solve()
{
    DP[0]=0;
    DP[1]=1;
    DP[2]=2;
    for(ll i=3;i<N;i++){
        DP[i] = max(i,DP[i/2]+DP[i/3]+DP[i/4]);
    }
}
ll solve(ll n){
    if(n<N){
        return DP[n];
    }
    return max(n,solve(n/2)+solve(n/3)+solve(n/4));
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll testcase,i;
    solve();
    while(cin>>testcase)
    {
        i=testcase;
        if(i>N-1){
            cout<<solve(i)<<'\n';
        }
        else{
            cout<<DP[i]<<'\n';
        }
    }
    return 0;
}