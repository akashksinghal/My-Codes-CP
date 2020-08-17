// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
#define N 100005
vector<ll> A[N];
vector<bool> vis(N);
void dfs(ll vertes){
    vis[vertes]=true;
    for(auto i:A[vertes]){
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
    ll n,m,k,a,b,cnt = 0;
    cin>>n>>m>>k;
    for(ll i=0;i<m;i++){
        cin>>a>>b;
        A[a].push_back(b);
        A[b].push_back(a);
    }
    for(ll i=1;i<=n;i++){
        if(!vis[i]){
            cnt++;
            dfs(i);
        }
    }
    if(cnt>k) cout<<-1;
    // cout << m - (n-k);
    else cout<<(m+k-n);
    return 0;
}