// author : akashksinghal
#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

signed main()
{
    fasino
    int testcase;
    cin>>testcase;
    while(testcase--){
        ll n,k;
        cin >> n >> k;
        vector<ll> A(n);
        for (int i = 0; i < n; i++)
            cin >> A[i];
        ll ans = -1, val;
        for (int i = 0; i < n; i++){
            if (A[i] <= k) {
                if (k % A[i] == 0){
                    if (ans == -1){
                        val = (k / A[i]) - 1;
                        ans = A[i];
                    }
                    else{
                        if (val > ((k / A[i]) - 1)){
                            ans = A[i];
                            val = (k / A[i]) - 1;
                        }
                    }
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}