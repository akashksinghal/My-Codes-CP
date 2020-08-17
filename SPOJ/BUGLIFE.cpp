#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define N 2005

#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
vector<int> A[N];
bool vis[N];
bool col[N];

// Check if the graph is bipartite or not.
bool dfsBiper(int vertex, bool color)
{
    vis[vertex] = true;
    col[vertex] = color;
    for(auto i:A[vertex]){
        if(!vis[i]){
            if(!dfsBiper(i,!color)){
                return false;
            }
        }
        else{
            if(col[vertex]==col[i]){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int T,v,e,a,b;
    cin>>T;
    for(int i=1;i<=T;i++){
        for(int j=1;j<=N;j++) A[j].clear(),col[j]=false,vis[j]=0;
        cout<<"Scenario #"<<i<<":\n";
        cin>>v>>e;
        while(e--){
            cin>>a>>b;
            A[a].push_back(b);
            A[b].push_back(a);
        }
        // int cnt = 0;
        bool flag = true;
        for(int i=1;i<=v;i++){
            if(!vis[i]){
                bool ko = dfsBiper(i,true);
                if(!ko){
                    flag = ko;
                }
                // cnt++;
            }
            
        }
        // cout<<cnt<<" ";
        // for(int j=1;j<=v;j++) cout<<col[j]<<" ";
        if(!flag){
            cout<<"Suspicious bugs found!\n";
        }
        else{
            cout<<"No suspicious bugs found!\n";
        }
    }
    return 0;
}