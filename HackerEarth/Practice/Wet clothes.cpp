// I'm a f*cking looser
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
    int n,m,g,count = 0;
    cin>>n>>m>>g;
    int A[n],B[m];
    input(A,n);
    input(B,m);
    for(int i=1;i<n;i++){
        int gp = A[i]-A[i-1];
        for(auto i:B){
            if(gp>=i){
                count++;
            }
        }
    }
    cout<<count<<"";
    return 0;
}