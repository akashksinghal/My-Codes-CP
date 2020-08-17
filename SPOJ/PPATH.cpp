// I'm a f*cking looser
#include<bits/stdc++.h>

using namespace std;
// #define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);

#define N 10001
vector<short int> A[N];
vector<short int> dis(N);
vector<bool> vis(N);
vector<short int> primes;
// bool prime[N];
bool isValid(short int a,short int b)
{
    int cnt = 0;
    while(a){
        if(a%10!=b%10)
            cnt++;
        a/=10;
        b/=10;
    }
    if(cnt==1) return true;
    return false;
}
bool isprime(short int n){
    if(n==1) return false;
    if(n==2 || n==3 || n==5) return true;
    for(short int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
void seive()
{
    // for(int i=2;i*i<=N;i++){
    //     if(!prime[i]){
    //         for(int j=i*i;j<=N;j+=i){
    //             prime[j] = true;
    //         }
    //     }
    // }
    for(int i = 1009;i<=9999;i++) if(isprime(i)) primes.push_back(i);
    for(int i=0;i<primes.size();i++){
        for(int j=i+1;j<primes.size();j++){
            if(isValid(primes[i],primes[j]))
            {
                A[primes[i]].push_back(primes[j]);
                A[primes[j]].push_back(primes[i]);
            }
        }
    }
}
void bfs(short int src)
{
    vis[src]=true;
    dis[src]=0;
    queue<short int> q;
    q.push(src);
    while(!q.empty())
    {
        short int k = q.front(); q.pop();
        for(auto i:A[k]){
            if(!vis[i]) dis[i] = dis[k] + 1, vis[i]=true, q.push(i);
        }
    }
}
void solve()
{
    for(short int i=1009;i<=9999;i++) vis[i]=false, dis[i]=-1;
    int a,b;
    cin>>a>>b;
    bfs(a);
    if(dis[b]==-1) cout<<"Impossible\n";
    else cout<<dis[b]<<'\n';
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    seive();
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}