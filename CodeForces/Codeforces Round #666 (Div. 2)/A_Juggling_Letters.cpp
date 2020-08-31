//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n;
    cin >> n;
    vector<string> A(n);
    input(A);
    vector<int> fre(26,0);
    for(auto i:A){
        for(auto j:i){
            fre[j-'a']++;
        }
    }
    bool ans = true;
    for(int i=0;i<26;i++){
        if(fre[i]%n!=0){
            ans = false;
        }
    }
    if(ans) cout <<"YES\n";
    else cout <<"NO\n";
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