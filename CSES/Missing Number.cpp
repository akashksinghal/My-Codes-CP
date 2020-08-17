// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
bool res[200005];
int main()
{
    fasino
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin); 
    // #endif
    ll n,tmp,sum=0;
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>tmp;
        sum+=tmp;
    }
    // for(int i=1;i<=n;i++){
    //     if(!res[i]){
    //         cout<<i;
    //         break;
    //     }
    // }
    cout<<(n*(n+1)/2)-sum;
    return 0;
}