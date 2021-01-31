#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define input(A) for(auto &i:A) cin >> i;

void solve(){
    ll n,cnt = 0;
    cin >> n;
    ll sum = 2*n;
    ll k = sqrt(sum);
    for(ll i=1;i*i<=sum;i++){
        if(sum%(i)==0){
            ll m = sum/i;
            m-=(i-1);
            if(m%2==0){
                cnt++;
            }
        }
    }
    cout << cnt*2 ;
}

int main(){
    int t=1;
    // cin >> t;
    while(t--){
        solve();
    }
}