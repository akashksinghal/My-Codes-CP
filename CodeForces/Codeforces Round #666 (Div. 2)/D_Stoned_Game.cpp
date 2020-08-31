//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n, chance = 0,prev;
    cin >> n;
    vector<ll> A(n);
    input(A);
    priority_queue<ll> qu;
    for(auto i:A) qu.push(i);
    ll check = 1, Aa = 0, Bb = 0, cnt = 0;
    while(qu.top()!=0)
    {
        if(check){
            cnt++;
            Aa = qu.top();
            qu.pop();
            qu.push(max(Bb-1,0LL));
            check = 1 - check;
        }
        else{
            cnt--;
            Bb = qu.top();
            qu.pop();
            qu.push(max(Aa-1,0LL));
            check = 1 - check;
        }
    }
    if (cnt > 0) cout << "T\n";
    else cout<<"HL\n";
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