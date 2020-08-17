//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n, maxi = 1;
    cin>>n;
    vector<ll> A(n);
    input(A);
    if(n==1){
        cout<<0<<'\n';
        return;
    }
    set<ll> mp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            mp.insert(A[i]+A[j]);
        }
    }
    for(auto k:mp){
        ll cnt = 0;
        vector<bool> used(n,false);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j and !used[i] and !used[j] and A[i]+A[j]==k){
                    cnt++;
                    used[i] = used[j] = true;
                }
            }
        }
        maxi = max(maxi,cnt);
    }
    cout<<maxi<<'\n';
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