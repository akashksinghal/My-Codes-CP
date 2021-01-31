#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long int sum = n * (n + 1) / 2;
    if (sum & 1)
    {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    vector<long long int> A, B;
    sum /= 2;
    while (n > 0)
    {
        if ((sum - n) >= 0)
        {
            A.push_back(n);
            sum -= n;
        }
        else
        {
            B.push_back(n);
        }
        n--;
    }
    cout << A.size() << "\n";
    for (auto i : A)
        cout << i << ' ';
    cout << "\n";
    cout << B.size() << "\n";
    for (auto i : B)
        cout << i << ' ';
}