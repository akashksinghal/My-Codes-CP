/*
Input : 3
Output: 
        5
        ((()))
        (()())
        (())()
        ()(())
        ()()()
*/

#include <bits/stdc++.h>
using namespace std;

void generate(string cur, int open, int close, vector<string> &ans) {
    if (open == 0 and close == 0) {
        ans.push_back(cur);
        return;
    }
    string op1 = cur + "(";
    string op2 = cur + ")";
    if (open == close) {
        generate(op1, open - 1, close, ans);
        return;
    } else if (open < close and open != 0) {
        generate(op1, open - 1, close, ans);
        generate(op2, open, close - 1, ans);
    } else {
        generate(op2, open, close - 1, ans);
    }
}

int main() {
    int n;
    cin >> n;
    string op = "(";
    vector<string> ans;
    generate(op, n - 1, n, ans);
    cout << ans.size() << '\n';
    for (auto i : ans) {
        cout << i << '\n';
    }
}