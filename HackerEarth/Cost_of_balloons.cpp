// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define input(A) for(auto &i: A) cin >> i.first >> i.second;
void solve()
{
    ll a,b,n, cost1 = 0, cost2 = 0;
    cin>>a>>b>>n;
    vector<pair<int,int>> A(n);
    input(A);
    for(auto i:A){
        cost1 += (i.first*a + i.second*b);
        cost2 += (i.first*b + i.second*a);
    }
    cout << min(cost1,cost2) << "\n";
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}