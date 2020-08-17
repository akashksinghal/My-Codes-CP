// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    string A;
    cin>>A;
    int n = A.size();
    char R[3] = {'R','P','S'};
    char res[3] = {'P','S','R'};
    int ans[3] = {0,0,0};
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++) if(A[i]==R[j]) ans[j]++;
    }
    ll best = 0, pos = 0;
    for(int i=0;i<3;i++){
        if(ans[i]>best) pos = i, best = ans[i];
    }
    for(int i=0;i<n;i++) cout<<res[pos];
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