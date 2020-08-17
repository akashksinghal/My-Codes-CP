// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
bool vis[10002];
vector<ll> A[10002];
void dfs(ll n){
    vis[n]=true;
    for(auto i:A[n]){
        if(!vis[i]){
            dfs(i);
        }
    }
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        A[a].push_back(b);
        A[b].push_back(a);
    }
    int cp = 0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i); cp++;
        }
    }
    if(e==n-1 and cp==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}