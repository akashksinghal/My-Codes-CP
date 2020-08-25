// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

signed main()
{
    fasino
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        ll h,p;
        cin >> h >> p;
        ll ans = 0;
        while(p!=0){
            ans+=p;
            p/=2;
        }
        if(ans >= h) cout << 1 <<'\n';
        else cout << 0 << '\n';
    }
    return 0;
}