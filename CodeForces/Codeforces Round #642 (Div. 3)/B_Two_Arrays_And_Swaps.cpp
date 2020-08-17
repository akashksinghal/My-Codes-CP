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
    int A[n],B[n];
    for(int i=0;i<n;i++) cin>>A[i];
    for(int i=0;i<n;i++) cin>>B[i];
    sort(A,A+n);
    sort(B,B+n);
    int sum =0;
    for(int i=0;i<n;i++) sum+=A[i];
    for(int i=0;i<k;i++){
        int temp = A[i];
        A[i] = B[n-1];
        B[n-1] = temp;
        sort(B,B+n);
        int sm = 0;
        for(int i=0;i<n;i++) sm+=A[i];
        if(sm>sum)
            sum = sm;
    }
    cout<<sum<<'\n';
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