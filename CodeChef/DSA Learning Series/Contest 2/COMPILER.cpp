//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    string A;
    cin >> A;
    ll ans = 0, res = 0;
    stack<char> st;
    for(ll j=0;j<A.size();j++){
        char i = A[j];
        if(i=='<'){
            res++;
        }
        else{
            res--;
            if(res==0) ans = max(ans, j+1);
            else if(res<0) break;
        }
    }
    cout << ans << '\n';
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