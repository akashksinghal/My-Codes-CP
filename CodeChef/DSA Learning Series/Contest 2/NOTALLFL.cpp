//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll N, K, i = 0, j = 0, ans = 1, uni = 0;
    cin >> N >> K;
    vector<ll> A(N);
    input(A);
    map<ll,ll> mp;
    while(i<N){
        if(mp[A[i]]==0) uni++;
        mp[A[i]]++;
        if (uni < K){
            ans = max(ans, i - j + 1);
        }
        while(uni==K){
            mp[A[j]]--;
            if(mp[A[j]]==0) uni--;
            j++;    
        }
        i++;
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