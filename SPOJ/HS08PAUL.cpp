// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
#define N 10000009
#define mx 10000000
bool A[N];
bool prime[N];
short int ans[N];
void seive()
{
    //4th root of 10000000 is approx 56 
    //2nd root of 10000000 is 3562
    //Thus these are the max cases possible
    for(int i=0;i<=3562;i++){
        for(int j=0;j<=56;j++){
            ll z = i*i + j*j*j*j;
            if(z<=mx){
                A[z] = true;
            }
        }
    }
    for(ll i=7;i*i<N;i++){
        if(!prime[i]){
            for(ll j=i*i;j<N;j+=i){
                prime[i]=true; A[j]=false;
            }
        }
    }
    A[1]=false;
    for(ll i=1;i<=mx;i++){
        if(i%2==0 and i!=2)  A[i]=false;
        if(i%5==0 and i!=5)  A[i]=false;
        if(i%3==0 and i!=3)  A[i]=false;
        ans[i]=ans[i-1]+A[i];
    }
}
void solve()
{
    ll n;
    cin>>n;
    cout<<ans[n]<<'\n';
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