#include <bits/stdc++.h>
using namespace std;

// Solution: 1
int main()
{
    long long n, m, j = 0, i = 0;
    cin >> n >> m;
    vector<long long int> A(n), B(m);
    unsigned long long ans = 0;
    for (auto &i : A) cin >> i;
    for (auto &i : B) cin >> i;
    while (i < n) {
        long long cntA = 0, cntB = 0;
        long long ele = A[i];
        while (j < m and B[j] < ele) j++;
        while (j < m and B[j] == ele) {
            j++;
            cntB++;
        }
        while (i < n and A[i] == ele) {
            cntA++;
            i++;
        }
        ans += (cntA * cntB);
        if (j == m) {
            break;
        }
    }
    cout << ans;
}

// Solution: 2

// int main() {
//     int n, m, j = 0, i = 0;
//     cin >> n >> m;
//     vector<long long int> A(n), B(m);
//     unsigned long long ans = 0;
//     for (auto &i : A) cin >> i;
//     for (auto &i : B) cin >> i;
//     unordered_map<long long, long long> mpA, mpB;
//     for(auto i:A) mpA[i]++;
//     for(auto i:B) mpB[i]++;
//     for(auto i:mpA){
//         ans += (i.second * mpB[i.first]);
//     }
//     cout << ans;
// }