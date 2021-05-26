//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
bool cmp(pair<ll,ll> a, pair<ll,ll> b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
}
signed main()
{
    fasino
    int n, k = 0;
    cin >> n;
    vector<pair<ll,ll>> a(n), b(n);
    for(int i=0;i<n;i++){
        cin >> a[i].first >> b[i].first;
        a[i].second = i, b[i].second = i;
    }
    ll A = INT32_MAX, B = INT32_MAX, mini = INT32_MAX, idx = 0;
    for(int i=0;i<n;i++){
        if (mini > a[i].first + b[i].first) {
            mini = min(mini, a[i].first + b[i].first);
            idx = i;
        }
        
    }
    sort(a.begin(),a.end(), cmp);
    sort(b.begin(),b.end(), cmp);    
    ll pi,po;
    if(a[0].second == b[0].second){
        pi = min(max(a[0].first,b[1].first), max(a[1].first, b[0].second));
    }
    else{
        pi = max(a[0].first,b[0].first);
    }
    cout << min(pi, mini);
    return 0;
}