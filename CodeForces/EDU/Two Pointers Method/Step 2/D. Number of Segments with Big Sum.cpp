#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, m, j = 0, i = 0, s, sum = 0;
    cin >> n >> s;
    vector<long long int> A(n);
    long long int ans = 0;
    for (auto &i : A) cin >> i;
    while(i<n){
        sum += A[i];
        while(j <= i && sum >= s) {
            ans+= (n-i);
            sum -= A[j];
            j++;
        }
        i++;
    }
    cout << ans ;
}