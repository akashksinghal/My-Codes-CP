#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    ll N, sum = 0;
    cin>>N;
    vector<ll> A(N),B(N);
    for(auto &i:A) cin>>i;
    for(auto &i:B) cin>>i;
    asc(A);
    asc(B);
    for(ll i=0;i<N;i++)
        sum= sum + (A[i]*B[i]);
    cout<<sum<<"\n";
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}