// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
#define N 1002
bool vis[N];
int dep[N];
int girl[N];
vector<int> A[N];
int n,q;
void dfs(int n,int depth){
    vis[n]=1;
    dep[n]=depth;
    for(auto i:A[n]){
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
    cin>>n;
    int k = n-1;
    while(k--){
        int a,b;
        cin>>a>>b;
        A[a].push_back(b);
        A[b].push_back(a);
    }
    cin>>q;
    while(q--){
        int a;
        cin>>a;
        girl[a]=1;
    }
    dfs(1,0);
    int mini = INT16_MAX, ans = INT16_MAX;
    for(int i=1;i<=n;i++){
        // cout<<dep[i]<<" ";
        if(girl[i]==1){
            if(dep[i]<mini){
                mini = dep[i];
                ans = i;
            }
            if(dep[i]==mini and i<ans){
                ans = i;
            }
        }
    }
    cout<<ans;
    return 0;

}