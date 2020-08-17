// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
#define N 1000005
vector<int> A[N];
vector<bool> vis(N);
vector<int> con_compnent(N);
int connected_component = 0;
void dfs(int vertex)
{
    vis[vertex] = true;
    con_compnent[vertex]=connected_component;
    for(auto i:A[vertex]){
        if(!vis[i]){
            dfs(i);
        }
    }
}
void solve()
{
    int a,b,k,m;
    cin>>a>>b;
    string str;
    for(int i=0;i<=a;i++) A[i].clear(), vis[i]=false;
    vector<pair<int,int>> pipers; 
    for(int i=0;i<b;i++){
        cin>>k>>str>>m;
        if(str=="="){
            A[k].push_back(m);
            A[m].push_back(k);
        }
        else{
            pipers.push_back({k,m});
        }
    }
    for(int i=1;i<=a;i++){
        if(!vis[i]){
            connected_component++;
            dfs(i);
        }
    }
    bool ans = true;
    for(auto i:pipers){
        int fir = i.first;
        int sec = i.second;
        if(con_compnent[fir]==con_compnent[sec]){
            ans = false;
            break;
        }
    }
    // for(int i=1;i<=a;i++){
    //     cout<<con_compnent[i]<<" ";
    // }
    if(ans) cout<<"YES\n";
    else cout<<"NO\n";
    connected_component = 0;
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