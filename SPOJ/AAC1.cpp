//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    int n,m;
    cin >> n >> m;
    vector<int> A[n+1];
    for(int i=0,a,b;i<m;i++){
        cin >> a >> b;
        A[a].push_back(b);
        A[b].push_back(a);
    }
    vector<int> dis(n+1, INT64_MAX);
    vector<bool> vis(n+1, false);
    dis[1] = 0;
    queue<int> Q;
    Q.push(1);
    while(!Q.empty()){
        int k = Q.front();
        vis[k] = true;
        Q.pop();
        for(auto i:A[k]){
            dis[i] = min(dis[k] + 1, dis[i]);
            if(!vis[i]){
                Q.push(i);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(auto j:A[i]){
            dis[j] = min(dis[j], dis[i] + 1);
        }
    }
    cout << dis[n] << '\n';
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