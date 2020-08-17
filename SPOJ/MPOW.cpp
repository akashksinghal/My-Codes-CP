#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define N 55
ll A[N][N],I[N][N]; 

void multiply(ll A[][N],ll B[][N],ll dim)
{
    ll res[N+1][N+1];
    for(ll i=0;i<dim;i++){
        for(ll j=0;j<dim;j++){
            res[i][j] = 0;
            for(ll k=0;k<dim;k++){
                res[i][j] = ((res[i][j]+(A[i][k]*B[k][j]))%mod);
            }
        }
    }
    
    for(ll i=0;i<dim;i++) for(ll j=0;j<dim;j++) A[i][j]=res[i][j];
}

void power(ll A[][N],ll dim,ll n)
{
    for(ll i=0;i<dim;i++) for(ll j=0;j<dim;j++) if(i==j) I[i][i]=1;  else I[i][j]=0;
    while(n>0){
        if(n&1){
            multiply(I,A,dim);
        }
        multiply(A,A,dim);
        n>>=1;
    }
    for(ll i=0;i<dim;i++) for(ll j=0;j<dim;j++) A[i][j]=I[i][j];
}

void printMatrix(ll A[][N],ll dim){
    for(ll i=0;i<dim;i++) {
        for(ll j=0;j<dim;j++) 
            cout<<A[i][j]<<' '; 
        cout<<'\n';
    }
}

int main(){
    int64_t t,n,dim;
    ios_base::sync_with_stdio(false); cin.tie(0);
    cout.tie(0);
    freopen("input.txt","r",stdin);
    cin>>t;
    while(t--){
        cin>>dim>>n;
        for(ll i=0;i<dim;i++) for(ll j=0;j<dim;j++) cin>>A[i][j];
        power(A,dim,n);
        printMatrix(A,dim);
    }
    // cout<<sizeof(int64_t)<<' '<<INT128_MAX;
}