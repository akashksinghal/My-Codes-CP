//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
#define all(A) A.begin(),A.end()
void solve()
{
    ll n,k;
    cin >> n >> k; 
    vector<ll> A(n);
    input(A);
    ll ans = *max_element(all(A)), sum = 0;
    // KADANES
    for(int i=0;i<n;i++){
        sum += A[i];
        if (sum < 0) sum = 0;
        else ans = max(ans, sum);
    }
    if(k>1){
        ll p = 0, s = 0, pref = 0, suf = 0;
        for (int i = 0; i < n; i++) {
            p += A[i]; s += A[n - 1 - i];
            pref = max(pref,p);
            suf = max(suf,s);
        }
        if(pref + suf > 0){
            ll sumi = max(accumulate(all(A),0LL),0LL);
            ans = max(pref + suf + (k-2)*sumi, ans);
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