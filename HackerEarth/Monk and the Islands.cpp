// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
#define N 10005
vector<int> A[N];
vector<bool> vis(N);
vector<int> dis(N);
void bfs(int src){
    queue<int> q;
    vis[src]=true;
    dis[src]=0;
    q.push(src);
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        for(auto i: A[cur]) 
            if(!vis[i]) 
                q.push(i), dis[i]=dis[cur]+1, vis[i]=true;
    }
}
void solve()
{
    int V,E;
    cin>>V>>E;
    for(int i=0;i<=V;i++) A[i].clear(),vis[i]=false;
    for(int i=0;i<E;i++){
        int a,b;
        cin>>a>>b;
        A[a].push_back(b);
        A[b].push_back(a);
    }
    bfs(1);
    cout<<dis[V]<<'\n';
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