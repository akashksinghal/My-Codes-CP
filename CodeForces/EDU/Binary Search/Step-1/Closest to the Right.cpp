#include<bits/stdc++.h>
using namespace std;

#define int long long

int Closest_to_the_right(int val, int low, int high, vector<int> &A,int n){
    bool pb = false;
    while(low + 1 < high){
        int mid = (low + high) / 2;
        if(A[mid]>=val) high = mid, pb = true;
        else low = mid;
    }
    if(pb)
        return high+1;
    else
        return n + 1;
}

signed main(){
    int n,k,val;
    cin >> n >> k;
    vector<int> A(n);
    for(auto &i:A) cin >> i;
    while(k--){
        cin >> val;
        cout << Closest_to_the_right(val,-1,n,A,n) << '\n';
    }
}