#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, m, j = 0, i = 0, s, sum = 0;
    cin >> n >> s; bool flag = false;
    vector<long long int> A(n);
    long long int ans = INT32_MAX;
    for (auto &i : A) cin >> i;
    while(i<n){
        sum += A[i];
        while(j <= i && sum >= s) {
            flag = true;
            ans = min(ans, i - j + 1);
            sum -= A[j];
            j++;
        }
        i++;
    }
    cout << ((flag) ? ans : -1);
}