// Write a function that takes in an array of at least three integers and, without sorting the input array, returns a sorted array of the three largest integers in the input array.
// The function should return duplicate integers if necessary; for example, it should return [10, 10, 12] for an input array of [10, 5, 9, 10, 12].
// Sample Input
// array = [141, 1, 17, -7, -17, -27, 18, 541, 8, 7, 7]
// Sample Output
// [18, 141, 541]
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> res(3);
    multiset<int, greater<int>> st;
    for (int i = 0, temp; i < n; i++)
        cin >> temp, st.insert(temp);
    int cnt = 3;
    for (auto i : st) {
        res[--cnt] = i;
        if (cnt == 0)
            break;
    }
    for (auto i : res)
        cout << i << ' ';
}   