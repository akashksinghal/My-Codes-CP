// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define input(A,N) for(int i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int n;
    cin>>n;
    vector<int> a(n);
    input(a,n);
    int dp[n];
    dp[0] = 0;
    dp[1] = abs(a[1] - a[0]);  // Because At step 1 : Only i+1 jump is possible.
    for(int i = 2; i < n; i++) {
        dp[i] = min(dp[i - 1] + abs(a[i] - a[i - 1]), dp[i - 2] + abs(a[i] - a[i - 2]));
    }
    cout<<dp[n-1];
    return 0;
}