#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n, start = 0, songs = 1e18, j = 0, i = 0, p, cur = 0, sum = 0, res = 0;
    cin >> n >> p;
    vector<long long int> A(2 * n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        sum += A[i];
        A[i + n] = A[i];
    }
    res = p/sum;
    p %= sum;
    res *= n;
    while (i < 2 * n) {
        cur += A[i];    
        while ( j <= i and cur - A[j] >= p) {
            cur -= A[j];
            j++;
        }
        if (i - j + 1 < songs and cur >= p) {
            start = j;
            songs = i - j + 1;
        }
        // cout << start <<' ' << songs << ' ' << cur <<' ' << i << ' ' << j << '\n';
        i++;
    }
    // cout << sum << ' ' << k << ' ';
    res += songs;
    cout << (start % n) + 1 << ' ' << res;
}