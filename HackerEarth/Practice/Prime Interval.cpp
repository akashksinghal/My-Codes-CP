// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];

bool prime[100000];

void seive(){

    int N = 100000;
    prime[0]=prime[1]=true;
    for(int i=4;i<N;i+=2) prime[i]=true;
    for(int i=6;i<N;i+=3) prime[i]=true;
    for(int i=5;i*i<N;i++){
        if(!prime[i]){
            for(int j=i*i;j<N;j+=i){
                prime[j]=true;
            }
        }
    }
}   
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll l,r;
    seive();
    cin>>l>>r;
    for(ll i=l;i<=r;i++){
        if(!prime[i]){
            cout<<i<<" ";
        }
    }
    return 0;
}