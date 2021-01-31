#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, j = 0, i = 0, uni = 0, ans = 0;
    cin >> n;
    vector<long long> A(n);
    map<long long, long long> mp;
    for (auto &i : A) cin >> i;
    while(i<n){
        if(mp[A[i]]==0){
            mp[A[i]]++;
        }
        else{
            while(mp[A[i]]){
                --mp[A[j]];
                j++;
            }
            mp[A[i]]++;
        }
        ans = max(ans,i-j+1);
        i++;
    }   
    cout << ans;
}