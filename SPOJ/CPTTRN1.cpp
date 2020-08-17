#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    ll a,b,c=0;
    cin>>a>>b;
    char A[]={'*','.'};
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout<<A[(c++)%2];
        }
        c++;
        if(b&1)
            c++;
        cout<<"\n";
    }
    cout<<"\n";
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