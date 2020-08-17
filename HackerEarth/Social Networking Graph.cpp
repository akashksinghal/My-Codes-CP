// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define N 1000005
vector<int> A[N];
vector<int> level(N),distan(N);
bool vis[N];
void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    distan[src] = 0;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(auto i: A[cur]){
            if(!vis[i]){
                distan[i] = distan[cur]+1;
                q.push(i);
                vis[i]=true;
                level[distan[i]]++;
            }
        }
    }
}

int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        A[a].push_back(b);
        A[b].push_back(a);
    }
    cin>>m;
    while(m--){
        int a,b;
        cin>>a>>b;
        for(int i=0;i<=n;i++) level[i]=0, vis[i]=false;
        bfs(a);
        cout<<level[b]<<'\n';
    }
    return 0;
}