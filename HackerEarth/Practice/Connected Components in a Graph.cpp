// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
vector<int> A[100000];
bool vis[100000];
int n,e,a,b;
void dfs(int n)
{
    vis[n]=true;
    for(auto i:A[n]){
        if(!vis[i])
            dfs(i);
    }
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    cin>>n>>e;
    for(int i=0;i<e;i++){
        cin>>a>>b;
        A[a].push_back(b);
        A[b].push_back(a);
    }
    int count = 0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);count++;
        }
    }
    cout<<count;
    return 0;
}