//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
inline ll cal(ll A){ return (A*(A+1))/2;}
signed main()
{
    fasino
    ll n,m;
    cin >> n >> m;
    ll maxi = cal(n-m);
    ll tmp = n/m;
    ll gm = m;
    if(n%m!=0){
        gm-=(n%m);
    }
    ll mini = cal(tmp-1)*gm;
    mini += cal(tmp)*(m-gm);
    cout << mini << ' ' << maxi << '\n';
    return 0;
}