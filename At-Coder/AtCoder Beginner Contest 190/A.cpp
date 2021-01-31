#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define input(A) for(auto &i:A) cin >> i;

void solve(){
    ll a,b,c;
    cin >> a >> b >> c;
    if(c==0){
        while(true){
            if(a){
                a--;
            }
            else {
                cout << "Aoki";
                return;
            }
            if(b){
                b--;
            }
            else {
                cout << "Takahashi";
                return;
            }
        }
    }
    if(c==1){
        while(true){
            if(b){
                b--;
            }
            else {
                cout << "Takahashi";
                return;
            }
            if(a){
                a--;
            }
            else {
                cout << "Aoki";
                return;
            }
        }
    }
}

int main(){
    int t=1;
    // cin >> t;
    while(t--){
        solve();
    }
}