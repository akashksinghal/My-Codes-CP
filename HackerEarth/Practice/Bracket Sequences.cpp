// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
const int inf = (int)1e9 + 7;

int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    string A;
    cin>>A;
    ll n = A.size(), bal = 0, cnt = 0, mn = 0;
    for(int i=0;i<n;i++){
        if(A[i]=='(') bal++;
        else bal--;
        if(mn>bal) mn = bal, cnt=0;
        if(mn==bal) cnt++;
    }
    if(bal) cout<<0;
    else cout<<cnt;
    return 0;
}