// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
#define mod 1000000007
#define N 2
ll I[N][N];
void multiMatrix(ll A[][N],ll B[][N], ll dim)
{
    ll res[N+1][N+1];
    for(ll i=0;i<dim;i++){
        for(ll j=0;j<dim;j++){
            res[i][j]=0;
            for(ll k=0;k<dim;k++){
                res[i][j]=(res[i][j]+(A[i][k]*B[k][j]))%mod;
            }
        }
    }
    for(ll i=0;i<dim;i++) for(ll j=0;j<dim;j++) A[i][j] = res[i][j];
}

void power(ll A[][N], ll dim,ll n){
    
    for(ll i=0;i<dim;i++) for(ll j=0;j<dim;j++) if(i==j) I[i][j]=1; else I[i][j]=0;
    while(n){
        if(n%2){
            multiMatrix(I,A,dim); n--; 
        }else{
            multiMatrix(A,A,dim);
            n>>=1;
        }
    }
    for(ll i=0;i<dim;i++) for(ll j=0;j<dim;j++) A[i][j] = I[i][j];
}
ll fibo(ll n)
{
    ll f0=0,f1=1;
    if(n==0){
        // cout<<f0<<'\n'; return;
        return f0;
    }
    if(n==1){
        // cout<<f1<<'\n'; 
        return f1;
    }
    ll matrix[][2] = {{0,1},{1,1}};
    power(matrix,2,n-1);
    // cout<<(f0*matrix[0][1] + f1*matrix[1][1])%mod<<'\n';
    return (f0*matrix[0][1] + f1*matrix[1][1])%mod;
}
void solve()
{
    ll a,b;
    cin>>a>>b;
    ll k = fibo(a-1+2)-1;
    ll m = fibo(b+2)-1;
    if(m-k<0){
        cout<<(m-k+mod)%mod<<'\n';
        return;
    }
    cout<<(m-k)%mod<<'\n';
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