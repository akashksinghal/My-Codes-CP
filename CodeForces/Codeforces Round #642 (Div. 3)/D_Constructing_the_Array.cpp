// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
ll A[200001];
void solve()
{
    ll n,cnt = 1;
    cin>>n;
    priority_queue<pair<ll,pair<ll,ll> > > qu;
    qu.push({n,{-1,-n}});
    while(!qu.empty()){
        int l = -qu.top().second.first; 
        int r = -qu.top().second.second; 
        qu.pop();
        int mid = (l+r)/2;
        A[mid] = cnt++;
        if(l==r) continue;
        if(l<mid){
            qu.push({mid-l,{-(l),-(mid-1)}});
        }
        if(mid<r){
            qu.push({r-mid,{-(mid+1),-(r)}});
        }
    }
    for(int i=1;i<=n;i++) cout<<A[i]<<" ";
    cout<<'\n';
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