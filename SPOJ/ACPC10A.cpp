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
    while(true)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)
            break;
        if(2*b==(a+c))
            cout<<"AP "<<c+(c-b)<<endl;
        else
            cout<<"GP "<<c*(c/b)<<endl;
    }
    return 0;
}