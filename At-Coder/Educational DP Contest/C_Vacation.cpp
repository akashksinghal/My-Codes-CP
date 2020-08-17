// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll n;
    cin>>n;
    int A[n][3];
    for(auto &i:A){
        for(auto &j:i){
            cin>>j;
        }
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<3;j++){
            int x,y,z;
            if(j==0) 
                x=0;
            else 
                x = A[i-1][0];
            if(j==1) 
                y=0;
            else 
                y = A[i-1][1];
            if(j==2) 
                z=0;
            else 
                z = A[i-1][2];
            A[i][j]+=max({x,y,z});
        }
    }
    cout<<max({A[n-1][0],A[n-1][1],A[n-1][2]});
    return 0;
}