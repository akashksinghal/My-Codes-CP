//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
#define asc(A) sort(A.begin(),A.end())
void solve()
{
    ll n;
    cin >> n;
    vector<ll> A(n);
    input(A);
    asc(A);
    ll maxi = INT64_MIN;
    maxi = max(A[0]*A[1]*A[2]*A[3]*A[n-1], A[n-1]*A[n-2]*A[n-3]*A[n-4]*A[n-5]);
    maxi = max(A[0]*A[1]*A[n-1]*A[n-2]*A[n-3],maxi);
    maxi = max(A[0]*A[n-4]*A[n-1]*A[n-2]*A[n-3],maxi);
    maxi = max(A[0]*A[1]*A[n-1]*A[n-2]*A[2],maxi);
    maxi = max(A[0]*A[1]*A[n-1]*A[n-2]*A[n-3],maxi);
    cout << maxi << '\n';
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