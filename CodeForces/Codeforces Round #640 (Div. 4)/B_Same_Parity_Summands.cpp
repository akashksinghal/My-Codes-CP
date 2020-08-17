// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    ll n,k;
    cin>>n>>k;
    if(k>n){
        cout<<"NO\n";
    }
    else if((n-k+1)&1){
        cout<<"YES\n";
        for(ll i=0;i<k-1;i++) cout<<"1 ";
        cout<<(n-k+1)<<"\n";
    }
    else if(n%2==0 && k*2<=n){
        cout<<"YES\n";
        for(ll i=0;i<k-1;i++) cout<<"2 ";
        cout<<(n-(2*(k-1)))<<"\n"; 
    }
    else{
        cout<<"NO\n";
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