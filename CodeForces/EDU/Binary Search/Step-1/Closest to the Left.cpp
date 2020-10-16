#include<bits/stdc++.h>
using namespace std;

#define int long long

int Closest_to_the_left(int val, int low, int high, vector<int> &A){
    bool pb = false;
    while(low + 1 < high){
        int mid = (low + high) / 2;
        if(A[mid]<=val) low = mid, pb = true;
        else high = mid;
    }
    if(pb)
        return low+1;
    else return 0;
}

signed main(){
    int n,k,val;
    cin >> n >> k;
    vector<int> A(n);
    for(auto &i:A) cin >> i;
    while(k--){
        cin >> val;
        int ans = Closest_to_the_left(val,-1,n,A);
        cout << ans << '\n';
    }
}