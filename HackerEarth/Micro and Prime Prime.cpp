// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];

int A[1000010];
int pp[1000005];
// int result[1000005];
int prim = 0;

void seive(){

    int N = 1000002;
    for(int i=0;i<N;i++) A[i]=1;
    // for(int i=0;i<100;i++) cout<<A[i]<<" ";
    A[0]=A[1]=0;
    for(ll i=2;i*i<N;i++){
        if(A[i]==1){
            for(ll j=i*i;j<=N;j+=i){
                A[j]=0;
            }
        }
    }
    int cnt = 0;
    for(ll i=0;i<N;i++){
        if(A[i]==1)
            cnt++;
        if(A[cnt]==1)
            pp[i]=1;
        else 
            pp[i]=0;
    }
    for(ll i=0;i<N;i++){
        pp[i]+=pp[i-1];
    }

}   
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll l,r,t;
    seive();
    cin>>t;
    while(t--){
        cin>>l>>r; ll ans = 0; 
        // for(int i=l;i<=r;i++){
        //     ans+=pp[i];
        // }
        ans = pp[r]-pp[l-1];
        cout<<ans<<'\n';
    }
    return 0;
}