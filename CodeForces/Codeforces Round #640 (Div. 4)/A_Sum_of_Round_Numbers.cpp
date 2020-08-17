// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    string A;
    cin>>A;
    ll siz = A.size(), count = 0;;
    for(auto i:A){
        if(i!='0')
            count++;
    }
    cout<<count<<"\n"; int index = 0;
    for(ll i=0;i<A.size();i++){
        if(A[i]!='0'){
            cout<<A[i];
            for(int j=0;j<siz-i-1;j++) cout<<0;
            cout<<" ";
        }
    }
    cout<<"\n";
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