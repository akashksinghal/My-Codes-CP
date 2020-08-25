//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    int N;
    cin>> N;
    string A,B;
    cin>>A>>B;
    map<char,int> Aa,Bb;
    for(auto i:A) Aa[i]++;
    for(auto i:B) Bb[i]++;
    if(Aa['0']==Bb['0'] and Aa['1']==Bb['1']) cout << "YES\n";
    else cout << "NO\n";
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