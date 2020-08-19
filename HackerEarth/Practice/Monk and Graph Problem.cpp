// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
#define N (int)(1e5+7)
vector<int> A[N];
bool vis[N];
int maxi = 0;
int dfs(int vertex){
    int ans = A[vertex].size();
    vis[vertex] = true;
    for(auto i:A[vertex]){
        if(!vis[i])
            ans+=dfs(i);
    }
    return ans;
}
int main()
{
    // fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int n,m,a,b;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        A[a].push_back(b);
        A[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            int ans = dfs(i);
            maxi = max(maxi,ans/2);
        }
    }
    cout<<maxi;
    return 0;
}