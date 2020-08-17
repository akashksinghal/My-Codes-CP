// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(int i=0;i<N;i++) cin>>A[i];
void solve()
{
    int n;
    cin>> n;
    vector<int> A(n);
    input(A,n);
    if(next_permutation(A.begin(), A.end()))
        for(auto i:A) cout<<i;
    else cout<<-1;
    cout<<'\n';
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