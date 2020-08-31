//author : akashsinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    int n, ans, tmp;
    cin >> n;
    ans = n;
    for(int i=0;i<n;i++){
        cin >> tmp >> tmp;
    }
    tmp = n;
    tmp/=2;
    while(tmp >= 3){
        ans += tmp;
        tmp/=2;
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