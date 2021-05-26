#include<bits/stdc++.h>
using namespace std;

#define int int64_t

signed main(){
    int n, r, ans = 0, i = 0, j = 0;
    cin >> n >> r;
    vector<int> A(n);
    for(auto &i:A) cin >> i;
    while(i < n){
        while(j<i and A[i]-A[j]>r){
            j++;
        }
        i++;
        ans += j;
    }
    cout << ans;
}