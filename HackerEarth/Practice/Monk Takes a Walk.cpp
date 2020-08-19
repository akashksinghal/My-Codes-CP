// I'm a f*cking looser
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
    int count = 0;
    cin>>A;
    for(auto i:A){
        if(i=='A'||i=='E'||i=='I'||i=='O'||i=='U')
            count++;
        else if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u')
            count++;
    }
    cout<<count<<"\n";
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