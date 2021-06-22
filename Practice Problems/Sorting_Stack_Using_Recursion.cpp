
#include <bits/stdc++.h>
using namespace std;

void insert_val(stack<int> &A, int temp) {
    if (A.size() == 0 or A.top() >= temp) {
        A.push(temp);
        return;
    }
    int val = A.top();
    A.pop();
    insert_val(A, temp);
    A.push(val);
}

void rec_sort(stack<int> &A) {
    if (A.size() == 0)
        return;
    int val = A.top();
    A.pop();
    rec_sort(A);
    insert_val(A, val);
}

int main() {
    int n;
    cin >> n;
    stack<int> A;
    for(int i=0,k;i<n;i++){
        cin >> k;
        A.push(k);
    }
    rec_sort(A);
    while(!A.empty()){
        cout << A.top() << ' ';
        A.pop();
    }
}
