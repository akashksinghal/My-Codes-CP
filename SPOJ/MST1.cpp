// I'm a f*cking looser
// **** FINAL SUBMISSION : Its down and commented****
// *** Time : 0.01s and Memory 4.5M ***

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
#define N 20000001
int DP[20000001];
// Bottom Up
void solve(){
    DP[0]=0;
    DP[1]=0;
    for(ll i=2;i<N;i++){
        int mini = DP[i-1];
        if(i%2==0 and i%3==0){
            int a = DP[i/3];
            int b = DP[i/2];
            mini = min(mini,min(a,b));
        }
        else if(i%2!=0 and i%3==0){
            mini = min(mini,DP[i/3]);
        }
        else if(i%2==0 and i%3!=0){
            mini = min(mini,DP[i/2]);
        }
        DP[i]=mini+1;
    }
}
// Top Down
ll solve(ll n)
{
    if(n==1){
        return 0;
    }    
    if(DP[n]) 
        return DP[n];
    else if(n%2==0 && n%3 == 0){
        ll a = 1 + solve(n/2);
        ll b = 1 + solve(n/3);
        ll c = 1 + solve(n-1); 
        return DP[n] = min(a,min(b,c));
    }
    else if(n%3==0 && n%2!=0){
        return DP[n] = 1 + min(solve(n/3),solve(n-1));

    }
    else if(n%2==0 && n%3!=0){
        return DP[n] = 1 + min(solve(n/2),solve(n-1));
    }
    else 
        return DP[n] = 1 + solve(n-1);
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int testcase,k=1;
    cin>>testcase;
    solve();
    while(testcase--)
    {
        cout<<"Case "<<k++<<": ";
        ll n;
        cin>>n;
        cout<<DP[n]<<'\n';
        // cout<<solve(n)<<'\n';
    }
    return 0;
}
/*
**** FINAL SUBMISSION ****
*** Time : 0.01s and Memory 4.5M ***
// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
#define N 100001
int DP[N];
// Bottom Up
void solve(){
    DP[0]=0;
    DP[1]=0;
    for(ll i=2;i<N;i++){
        int mini = DP[i-1];
        if(i%2==0 and i%3==0){
            int a = DP[i/3];
            int b = DP[i/2];
            mini = min(mini,min(a,b));
        }
        else if(i%2!=0 and i%3==0){
            mini = min(mini,DP[i/3]);
        }
        else if(i%2==0 and i%3!=0){
            mini = min(mini,DP[i/2]);
        }
        DP[i]=mini+1;
    }
}
// Top Down
ll solve(ll n)
{
    if(n<N) 
        return DP[n];
    if(n%2==0 && n%3 == 0){
        ll a = 1 + solve(n/2);
        ll b = 1 + solve(n/3);
        return min(b,a);
    }
    if(n%3==0 && n%2!=0){
        return 1 + min(solve(n/3),solve(n-1));
    }
    if(n%2==0 && n%3!=0){
        return 1 + min(solve(n/2),solve(n-1));
    } 
    return 1 + solve(n-1);
}
int main()
{
    // fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int testcase,k=1;
    cin>>testcase;
    solve();
    while(testcase--)
    {
        cout<<"Case "<<k++<<": ";
        ll n;
        cin>>n;
        cout<<solve(n)<<'\n';
        // cout<<DP[n]<<'\n';
    }
    return 0;
}
*/