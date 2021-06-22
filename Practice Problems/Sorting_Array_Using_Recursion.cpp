
#include <bits/stdc++.h>
using namespace std;

void insert_val(vector<int> &A, int temp) {
    if (A.size() == 0 or A[A.size() - 1] <= temp) {
        A.push_back(temp);
        return;
    }
    int val = A[A.size() - 1];
    A.pop_back();
    insert_val(A, temp);
    A.push_back(val);
}

void rec_sort(vector<int> &A) {
    if (A.size() == 0)
        return;
    int val = A[A.size() - 1];
    A.pop_back();
    rec_sort(A);
    insert_val(A, val);
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (auto &i : A)
        cin >> i;
    rec_sort(A);
    for (auto i : A)
        cout << i << ' ';
}
