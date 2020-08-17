// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);

int rec_knapsack(vector<pair<int,int>> we, int weight, int n){
    if(n==0 || weight==0) return 0;
    if(we[n-1].first<=weight)
        return max(we[n-1].second+rec_knapsack(we,weight-we[n-1].first,n-1),rec_knapsack(we,weight,n-1));
    return rec_knapsack(we,weight,n-1);
}

int dp[101][100001];
int we[101],val[101];

int memo_knapsack(int weight,int n){
    if(n < 0 || weight <=0) return 0;
    int& st = dp[n][weight];
    if(st!=-1) 
        return st;
    if(we[n-1]<=weight)
        st=max(val[n-1]+memo_knapsack(weight-we[n-1],n-1),memo_knapsack(weight,n-1));
    else if(we[n-1]>weight)
        st = memo_knapsack(weight,n-1);
    return st;
} 

signed main()
{
    fasino
    int n,w;
    cin >> n >> w;
    for(int i=0;i<n;i++) cin>>we[i]>>val[i];

    // int profit = rec_knapsack(we,w,n); // basic recursive function
    
    // memset(dp,-1,sizeof dp);    
    // int prof = memo_knapsack(w,n); // Memoization aka top down
    // cout<<prof<<'\n';
    
    memset(dp,0,sizeof dp); // Tabulation Method bottom up
    for(int i=1;i<n+1;i++){
        for(int j=1;j<w+1;j++){
            if(we[i-1]<=j){
                dp[i][j] = max(val[i-1]+dp[i-1][j-we[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[n][w];
    return 0;
}
