//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n, x, y;
    cin >> n;
    vector<ll> A(100001,500);
    for (ll i = 0; i < n; i++) {
        cin >> x >> y ;
        A[x] = min(y,A[x]);
    }
    A[100000] = 0;
    ll maxi = 0;
    stack <ll> st;
    for (ll i = 1; i <= 100000; i++){
        while(!st.empty() and A[st.top()]>A[i]){
            ll height = A[st.top()];
            st.pop();
            ll lower = 0;
            if(!st.empty()){
                lower = st.top();
            }
            maxi = max(maxi, (i-lower)*height);
        }
        st.push(i);
    }
    cout << maxi ;
    return 0;   
}