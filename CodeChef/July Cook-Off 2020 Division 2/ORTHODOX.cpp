// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i; 
#define INT_SIZE 32 
void solve()
{
    ll n;
    cin >> n;
    vector<ll> A(n);
    input(A);
    int i,sum1 = 0, j; 
    set<ll> st;
    for (i = 0; i < n; i++) 
    { 
        sum1 = 0; 
        for (j = i; j < n; j++)  
        { 
            sum1 = (sum1 | A[j]); 
            if(st.find(sum1)!=st.end()){
                cout<<"NO\n";
                return;
            }
            st.insert(sum1);
        } 
    } 
    cout<<"YES\n";
}
signed main()
{
    fasino
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}