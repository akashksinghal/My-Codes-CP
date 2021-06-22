#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &A, int l, int mid, int h) {
    int A1 = mid - l + 1, A2 = h - mid;
    vector<int> a1(A1), a2(A2);
    for (int i = 0; i < A1; i++) {
        a1[i] = A[i + l];
    }
    for (int i = 0; i < A2; i++) {
        a2[i] = A[i + mid + 1];
    }
    int i(0), j(0), k(l);
    while (i < A1 and j < A2) {
        if (a1[i] <= a2[j]) {
            A[k++] = a1[i++];
        } else {
            A[k++] = a2[j++];
        }
    }
    while (i < A1) {
        A[k++] = a1[i++];
    }
    while (j < A2) {
        A[k++] = a2[j++];
    }
}

void mergeSort(vector<int> &A, int l, int h) {
    if (l < h) {
        int mid = l + (h - l) / 2;
        mergeSort(A, l, mid);
        mergeSort(A, mid + 1, h);
        merge(A, l, mid, h);
    }
}

signed main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (auto &i : A)
        cin >> i;
    mergeSort(A, 0, A.size() - 1);
    for (auto i : A)
        cout << i << ' ';
}