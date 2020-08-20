//author : akashksinghal
//Incomplete  
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    string A;
    cin >> A;
    ll x, y, q, x1, y1;
    cin >> x >> y;
    map<char,int> mp;
    for(auto i:A) mp[i]++;
    // for(auto [i,j]:mp) cout << i << ' ';
    cin >> q;
    while(q--){
        cin >> x1 >> y1 ;
        ll X = (x - x1), Y = (y - y1), xaxis, yaxis;
        bool res = true;
        if (X > 0)
            xaxis = mp['R'];
        else
            xaxis = mp['L'];
        if (Y > 0)
            yaxis = mp['U'];
        else
            yaxis = mp['D'];

        if(res) cout << "YES " << X + Y << '\n';
        else cout << "NO\n";

    }

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