// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    int v,t,s,d;
    cin >> v >> t >> s >> d;
    float sec = d/(v*1.0);
    if(sec >= t and sec <= s){
        cout << "No";
    }
    else {
        cout << "Yes";
    }
}
signed main()
{
    fasino
    int testcase = 1;
    // cin >> testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}