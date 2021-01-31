#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define input(A) for(auto &i:A) cin >> i;

void solve(){
    ll n,s,d,a,b;
    cin >> n >> s >> d;
    bool flag = false;
    while(n--){
        cin >> a >> b;
        if(a<s and b>d){
            flag = true;
        }
    }
    if(flag) cout <<"Yes";
    else cout <<"No";
}

int main(){
    int t=1;
    // cin >> t;
    while(t--){
        solve();
    }
}