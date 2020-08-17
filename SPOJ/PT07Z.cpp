// // I'm a f*cking looser
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define fasino ios_base::sync_with_stdio(false); cin.tie(0);
// #define asc(A) sort(A.begin(),A.end())
// #define dsc(A) sort(A.begin(),A.end(),greater<ll>())
// #define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
// #define N 10005
// vector<int> A[N];
// bool vis[N];
// int dep[N];
// void dfs(int n,int depth)
// {
//     vis[n] = true;
//     dep[n] = depth;
//     for(auto i:A[n]){
//         if(!vis[i]){
//             dfs(i,depth+1);
//         }
//     }
// }
// int main()
// {
//     fasino
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin); 
//     #endif
//     int V,E,a,b;
//     cin>>V;
//     for(int i=1;i<=V-1;i++){
//         cin>>a>>b;
//         A[a].push_back(b);
//         A[b].push_back(a);
//     }
//     dfs(1,0);
//     int maxi = 1;
//     for(int i=1;i<=V;i++)
//     {
//         // cout<<dep[i]<<" "<<dep[maxi]<<'\n';
//         if(dep[i]>=dep[maxi])
//             maxi = i;
//     }
//     // cout<<dep[maxi];
//     memset(vis,false,sizeof vis);
//     memset(dep,0,sizeof dep);
//     dfs(maxi,0);
//     cout<<*max_element(dep,dep+V+4);
//     return 0;
// }

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
bool vis[N];
int Mxdep=-1, MxdepNode;
void dfs(int vertex,int depth)
{
    vis[vertex] = true;
    if(depth>Mxdep) Mxdep=depth, MxdepNode=vertex;
    for(auto i:A[vertex]){
        if(!vis[i]){
            dfs(i,depth+1);
        }
    }
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int V,E,a,b;
    cin>>V;
    for(int i=1;i<=V-1;i++){
        cin>>a>>b;
        A[a].push_back(b);
        A[b].push_back(a);
    }
    dfs(1,0);
    memset(vis,false,sizeof vis);
    dfs(MxdepNode,0);
    cout<<Mxdep;
    return 0;
}