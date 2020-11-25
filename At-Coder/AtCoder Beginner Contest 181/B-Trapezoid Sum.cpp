//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n, sum =0;
    cin >> n;
    vector<pair<ll,ll>> A(n);
    for(int i=0;i<n;i++){
        cin >> A[i].first>> A[i].second;
    }
    for(auto i:A) {
        ll k = i.first-1, m = i.second;
        ll j = (m*(m+1))/2;
        ll op = ((k*(k+1))/2);
        // cout << j << ' ' << op << '\n';
        sum += j - op;
    }
    cout << sum ;
    return 0;
}