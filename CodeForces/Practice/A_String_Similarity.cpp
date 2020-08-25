//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n; cin >> n;
    string A; cin >> A;
    string ans(n,'0');
    int po = 0;
    for(int i=0;i<n;i++){
        string ko(A.begin()+i,A.begin()+i+n);
        if(ko[po]!=ans[po]){
            ans[po]='1';
        }
        po++;
    }
    // cout << '\n';
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