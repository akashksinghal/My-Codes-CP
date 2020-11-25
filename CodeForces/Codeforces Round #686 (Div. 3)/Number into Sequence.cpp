//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void primeFactors(ll n, map<ll,ll> &res)  
{  
    while (n % 2 == 0)  
    {  
        res[2]++;
        n = n/2;  
    }  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            res[i]++;
            n = n/i;  
        }  
    }  
    if (n > 2)  
        res[n]++;
}  
void solve()
{
    ll n;
    cin >> n;
    map<ll,ll> res;
    primeFactors(n,res);
    vector<ll> ans; 
    ll vali = 0, val;
    for (auto i : res) {
        vali = max(i.second,vali);
    }
    for(auto i:res){
        if(i.second == vali){
            val = i.first;
        }
    }
    ll cnt = res[val];
    if(val == n){
        ans.push_back(n);
    }
    else{
        ll op = 1;
        for(int i=1;i<cnt;i++){
            ans.push_back(val);
            op*=val;
        }
        ans.push_back(n/op);
    }
    cout << ans.size() << '\n';
    for(auto i:ans) cout << i << ' ';
    cout << '\n';
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