// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define input(A,N) for(ll i=1;i<=N;i++) cin>>A[i];
vector<int> A;
bool cmp(int an,int na){
    if(A[an]==A[na]){
        return an>na;
    }
    return A[an]>A[na];
}
vector<int> graph[10005];
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int n,m,k,a,b;
    cin>>n>>m>>k;
    A.resize(n+1);
    input(A,n);
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        if(graph[i].size()<k){
            cout<<-1<<'\n';
        }
        else{
            sort(graph[i].begin(),graph[i].end(),cmp);
            cout<<graph[i][k-1]<<'\n';
            // cout<<ans.size();
        }
    }
    return 0;
}