// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll x,y,z,a,b,c;
    bool flag = false;
    cin>>x>>y>>z;
    if(x==y and y==z){
        a = b = c = x;
        flag = true;
    }
    else if(x==y){
        if(x>z){
            flag = true;
            b = x;
            a = z;
            c = 1;
        }
    }
    else if(y==z){
        if(y>x){
            flag = true;
            c = y;
            a = x;
            b = 1;
        }
    }
    else if(x==z){
        if(x>y){
            flag = true;
            a = x;
            b = y;
            c = 1;
        }
    }
    if(flag){
        cout<<"YES\n";
        cout<<a<<" "<<b<<' '<<c<<'\n';
    }
    else cout<<"NO\n";
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