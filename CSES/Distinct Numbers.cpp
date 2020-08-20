//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n;
    cin >> n;
    vector <ll> A(n);
    input(A);
    set<ll> st(A.begin(), A.end());
    cout << st.size() ;
    return 0;
}