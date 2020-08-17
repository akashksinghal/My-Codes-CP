// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
vector<int> A[100005];
bool vis[100005];
void dfs(int node)
{
    vis[node] = true;
    for(auto i:A[node]){
        if(!vis[i])
            dfs(i);
    }
}
void solve()
{
    int V, E,a,b,cnt = 0;
    cin>>V>>E;
    for(int i=0;i<E;i++){
        cin>>a>>b;
        A[a].push_back(b);
        A[b].push_back(a);
    }
    for(int i=0;i<V;i++){
        if(!vis[i]){
            dfs(i);
            cnt++;
        }
    }
    cout<<cnt<<'\n';
    for(int i=0;i<V;i++) A[i].clear(), vis[i]=false;
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