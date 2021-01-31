#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, j = 0, i = 0;
    cin >> n >> m;
    vector<long long int> A(n), B(m);
    unsigned long long ans = 0;
    for (auto &i : A) cin >> i;
    for (auto &i : B) cin >> i;
    unordered_map<long long, long long> mpA, mpB;
    for(auto i:A) mpA[i]++;
    for(auto i:B) mpB[i]++;
    for(auto i:mpA){
        ans += (i.second * mpB[i.first]);
    }
    cout << ans;
}