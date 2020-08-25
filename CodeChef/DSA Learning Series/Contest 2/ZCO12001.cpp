//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n;
    cin >> n;
    vector<ll> A(n+1,0);
    for (ll i = 1; i < n + 1; i++) cin >> A[i];
    ll maxi_depth = 0, max_len_idx = 0, open = 0, close = 0, cnt = 0, chk = 0, mx = 0, maxi = 0;
    for (ll i = 1; i <= n; i++) {
        if(A[i]==1){
            open++, cnt++;
        }
        else{
            close++, cnt--;
        }
        if (cnt > maxi_depth){
            maxi_depth = cnt;
            max_len_idx = i;
        }
        if (open == close) {
            if ((open << 1) > mx) {
                mx = (open << 1);
                maxi = i - 2*open + 1;
            }
            close = open = 0;
        }
    }
    cout << maxi_depth << " " << max_len_idx << " " << mx << " " << maxi << '\n';
    return 0;
}