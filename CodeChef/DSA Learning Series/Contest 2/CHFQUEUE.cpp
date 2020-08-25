//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
#define mod 1'000'000'007
signed main()
{
    fasino
    ll n, k, fear = 1;
    cin >> n >> k;
    vector<ll> A(n);
    input(A);
    stack<pair<ll, ll>> st;
    for (ll i = 0; i < n; i++){
        while(!st.empty() and st.top().first > A[i]){
            (fear *= (i - st.top().second + 1)) %= mod;
            st.pop();
        }
        st.push({A[i],i});
    }
    cout << fear << '\n';
    return 0;
}