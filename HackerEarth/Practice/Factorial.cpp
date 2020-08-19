// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
vector<ll> A(100005);
void solve()
{
    ll n;
    cin>>n;
    cout<<A[n]<<'\n';
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int testcase;
    cin>>testcase;
    A[1] = 1, A[2] = 2, A[3] = 6;
    for(int i=4;i<=100000;i++){
        A[i] = (A[i-1]*i)%1000000007;
    }
    while(testcase--)
    {
        solve();
    }
    return 0;
}