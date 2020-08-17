// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
ll findLargestOddDivisor(ll n){
    while(n % 2 == 0){
        n >>= 1;
    }
    return n;
}
signed main()
{
    fasino
    int testcase;
    cin>>testcase;
    for(int i=1;i<=testcase;i++)
    {
        cout<<"Case "<<i<<": ";
        ll n; cin>>n;
        cout<<findLargestOddDivisor(n)<<'\n';
    }
    return 0;
}