#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    ll a,b;
    cin>>a>>b;
    string A = to_string(a);
    string B = (to_string(b));
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    ll c = stoi(A) + stoi(B);
    string C = (to_string(c));
    int i;
    reverse(C.begin(),C.end());
    for(i=0;i<C.length();i++)
        if(C[i]!='0')
            break;
    string D(C.begin()+i,C.end());
    cout<<D<<endl;
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