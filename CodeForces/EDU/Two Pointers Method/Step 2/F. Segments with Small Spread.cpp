#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, j = 0, i = 0, k;
    long long ans = 0;
    cin >> n >> k;
    vector<long long int> A(n);
    multiset<long long int> ms;
    for (auto &i : A) cin >> i;
    while (i < n) {         
        ms.insert(A[i]);
        while (*rbegin(ms) - *begin(ms) > k) {
            ms.erase(ms.find(A[j++]));
        }
        if(j<=i)
            ans += i-j+1;
        i++;
    }
    cout << ans;
}