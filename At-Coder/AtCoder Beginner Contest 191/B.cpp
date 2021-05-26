// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(int i=0;i<N;i++) cin>>A[i];
void solve()
{
    int n,x;
    cin >> n >> x;
    vector<int> A(n);
    input(A,n);
    for(auto i:A){
        if(i==x){
            continue;
        }
        cout << i <<' ';
    }
}
signed main()
{
    fasino
    int testcase = 1;
    // cin >> testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}