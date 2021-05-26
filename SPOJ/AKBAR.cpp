//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    int n,r,m;
    cin >> n >> r >> m;
    vector<int> A[n+1];
    vector<int> dis(n+1, INT64_MAX);
    vector<bool> vis(n+1, false);
    vector<bool> already(n+1, false);
    vector<pair<int,int>> soldier(m+1); // city number, strength
    for(int i=0,x,y;i<r;i++){
        cin >> x >> y;
        A[x].push_back(y);
        A[y].push_back(x);
    } 
    for(int i=1;i<=m;i++){
        cin >> soldier[i].first >> soldier[i].second;
    }
    bool ans = true;
    queue<int> Q;
    for(auto [city, strength]:soldier){
        queue<int> Q;
        Q.push(city);
        dis[city] = 0;
        vis[city] = true;
        while(!Q.empty()){
            int cur = Q.front();
            Q.pop();
            if(strength < dis[cur]){
                break;
            }
            if(already[cur]){
                ans = false;
                break;
            }
            for(auto i:A[cur]){
                if(!vis[i]){
                    dis[i] = dis[cur] + 1;
                    if(dis[i]<=strength){
                        vis[i] = true;
                    }
                    Q.push(i);
                }
            }
            already[cur] = true;
        }
        if(!ans) 
            break;
    }
    for(int i=1;i<=n;i++){
        if (!already[i]) {
            ans = false;
            break;
        }
    }
    ans ? cout << "Yes\n" : cout << "No\n";
}
signed main()
{
    fasino
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}