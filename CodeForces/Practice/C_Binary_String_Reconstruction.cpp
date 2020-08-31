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
    ll x, n = A.size();
    cin >> x;
    bool ch = true;
    string B(n,'1');
    for(int i=0;i<n;i++){
        if(i+x < n){
            if(A[i]=='0'){
                B[i+x] = '0';
            }
        }
        if(i-x>=0){
            if(A[i]=='0'){
                B[i-x] = '0';
            }
        }
        
    }
    for (int i = 0; i < n; i++) {
        if(A[i]=='1'){
            if((i-x>=0 and B[i-x]=='1') or (i+x<n and B[i+x]=='1')){
                continue;
            }
            else{
                ch = false;
                break;
            }
        }
    }
    if(ch) cout << B << '\n';
    else cout << -1 << '\n';
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