//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
void solve()
{
    ll n, ans =0;
    cin >> n;
    vector<ll> A(n);
    input(A);
    asc(A);
    map<ll,ll> mp;
    set<ll> a,b;
    for(auto i:A) mp[i]++;
    for(auto i:mp){
        int x = i.first, y = i.second;
        if(y>1){
            b.insert(x);
            a.insert(x);
        } else a.insert(x);
    }
    int a1 = 0, b1 = 0;
    bool flag = false;
    for(auto i:a){
        if(i!=a1){
            flag = true;
            ans+=a1;
            break;
        } 
        a1++;
    }
    if(!flag) ans+=a1;
    flag = false;
    for(auto i:b){
        if(i!=b1){
            flag = true;
            ans+=b1;
            break;
        }
        b1++;
    }
    if(!flag) ans+=b1;
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