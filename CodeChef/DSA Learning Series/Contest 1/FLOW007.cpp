#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
ll revse(ll A)
{
    ll res = 0;
    while(A!=0)
    {
        res = (res*10) + (A%10);
        A/=10;
    }
    return res;
}
void solve()
{
    ll A;
    cin>>A;
    A=revse(A);
    cout<<A<<endl;
}
int main()
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