// Write a function that takes in a non-empty array of distinct integers and an integer representing a target sum. If any two numbers in the input array sum up to the target sum, the function should return them in an array, in any order. If no two numbers sum up to the target sum, the function should return an empty array.
// Note that the target sum has to be obtained by summing two different integers in the array; you can't add a single integer to itself in order to obtain the target sum.
// You can assume that there will be at most one pair of numbers summing up to the target sum.
// Sample Input
// array = [3, 5, -4, 8, 11, 1, -1, 6]
// targetSum = 10
// Sample Output
// [-1, 11] // the numbers could be in reverse order

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n, target;
    // cin >> n >> target;
    // vector<int> A(n);
    // unordered_set<int> st;
    // for(auto &i:A) cin >> i, st.insert(i);
    // for(auto i:st){
    //     if (st.find(target - i) != st.end()) {
    //         cout << (target - i) << ' ' << i << '\n';
    //         return 0;
    //     }
    // }
    // cout << "No Pair Found";
    int t;
    cin >> t;
    while (t--)
    {
        int i, j;
        string s;
        getline(cin, s);
        vector<int> v;
        int n = s.length();
        vector<int> ve;
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                int d = s[j] - s[i];
                v.push_back(d);
            }
        }
        reverse(s.begin(), s.end());
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                int d1 = s[j] - s[i];
                ve.push_back(d1);
            }
        }
        (v == ve) ? cout << "Funny\n" : cout << "Not Funny\n";
    }