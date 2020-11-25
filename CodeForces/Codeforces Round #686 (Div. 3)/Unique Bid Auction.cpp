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
    vector<ll> A(n);
    input(A);
    map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
        mp[A[i]].push_back(i);
    }
    for(auto i:mp){
        if(i.second.size() == 1){
            cout << i.second[0]+1 << '\n';
            return ; 
        }       
    }
    cout << -1 << '\n';
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