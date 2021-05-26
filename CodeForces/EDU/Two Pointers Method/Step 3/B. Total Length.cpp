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
        while(sum > s){
            sum -= A[j++];
        }
        if(sum <= s){
            ans += (((i-j)+1)*((i-j)+2))/2;
        }
        i++;
    }
    cout << ans ;
}