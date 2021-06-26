#include<bits/stdc++.h>
using namespace std;

#define int int64_t

vector<double> funt(vector<int> A){
    vector<double> dt;
    for(auto i:A) dt.push_back(i*1.0);
    return dt;
}

signed main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for(auto &i: A) cin >> i;
    auto dt = funt(A);
    for(auto i:dt) cout << i << ' ';
}