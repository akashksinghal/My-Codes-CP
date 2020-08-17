//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
void solve()
{
    ll n;
    cin>>n;
    vector<ll> A(n);
    input(A);
    asc(A);
    for(int i=0;i<n-1;i++){
        if(abs(A[i]-A[i+1])>1){
            cout << "NO\n";
            return;
        }
    }
    cout<<"YES\n";
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
