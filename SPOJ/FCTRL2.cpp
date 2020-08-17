#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];

void solve()
{
    ll Fi[1000];
    Fi[1] = 1;
    Fi[2] = 2;
    ll N;
    cin>>N;
    if(N==0)
    {
        cout<<1<<endl;
        return;
    }
    for(int i=3;i<=N;i++)
        Fi[i]= Fi[i-1]*i;
    cout<<Fi[N]<<endl;
}
int main()
{
    fasino
    // #ifdef AKS
    freopen("input.txt", "r", stdin); 
    // #endif
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}