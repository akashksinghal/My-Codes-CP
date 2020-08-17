// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);

int dp[4001][10001];
int we[4001],val[4001];

signed main()
{
    fasino
    int n,w;
    cin >> w >> n;
    for(int i=0;i<n;i++) cin>>we[i]>>val[i];
    memset(dp,0,sizeof dp); 
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
    cout<<dp[n][w];
    return 0;
}
