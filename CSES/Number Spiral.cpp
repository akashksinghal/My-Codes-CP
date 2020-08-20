//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll x, y;
    cin >> x >> y;
    ll mid = ((x-1)*(x-1) + 1 + (x*x))/2;
    // cout << start << ' ' << end << ' ';
    ll maxi = max(x,y);
    ll start = (maxi-1)*(maxi-1);
    ll end = (maxi*maxi)+1;
    // if(x==y){
    //     cout << mid ;
    // }
    // else 
    if(x>y){
        if(x&1){
            cout << start + y;
        }
        else{
            cout << end - y;
        }
    }
    else{   
        if(y&1){
            cout << end - x;
        }
        else{
            cout << start + x;
        }
    }
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