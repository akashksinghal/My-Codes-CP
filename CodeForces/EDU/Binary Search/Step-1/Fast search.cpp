#include<bits/stdc++.h>
using namespace std;

#define int long long

pair<int,bool> Closest_to_the_left(int val, int low, int high, vector<int> &A){
    bool pb = false;
    while(low + 1 < high){
        int mid = (low + high) / 2;
        if(A[mid]<=val) low = mid, pb = true;
        else high = mid;
    }
    if(pb)
        return {low+1,true};
    else return {0,false};
}
pair<int,bool> Closest_to_the_right(int val, int low, int high, vector<int> &A){
    bool pb = false;
    while(low + 1 < high){
        int mid = (low + high) / 2;
        if(A[mid]>=val) high = mid, pb = true;
        else low = mid;
    }
    if(pb)
        return {high+1,true};
    else
        return {A.size() + 1,false};
}

signed main(){
    int n,q,l,r;
    cin >> n;
    vector<int> A(n);
    for(auto &i:A) cin >> i;
    sort(A.begin(),A.end());
    cin >> q;
    while(q--){
        cin >> l >> r ;
        auto a = Closest_to_the_left(r,-1,n,A);
        auto b = Closest_to_the_right(l,-1,n,A);       
        cout << a.first - b.first + 1 << ' ';
    }
}