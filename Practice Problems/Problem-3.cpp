// Write a function that takes in two non-empty arrays of integers, finds the pair of numbers (one from each array) whose absolute difference is closest to zero, and returns an array containing these two numbers, with the number from the first array in the first position.

// Note that the absolute difference of two integers is the distance between them on the real number line. For example, the absolute difference of -5 and 5 is 10, and the absolute difference of -5 and -4 is 1.

// You can assume that there will only be one pair of numbers with the smallest difference.

// arrayOne = [-1, 5, 10, 20, 28, 3]
// arrayTwo = [26, 134, 135, 15, 17]
// Sample Output
// [28, 26]

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> A(n), B(m);
    for(auto &i:A) cin >> i;
    for(auto &i:B) cin >> i;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int mini = INT_MAX;
    pair<int,int> res;
    for(int i=0, j=0; i<n and j < m;){
        if (abs(A[i] - B[j]) < mini) {
            mini = abs(A[i] - B[j]);
            res = {A[i], B[j]};
        }
        if (A[i] < B[j])
            i++;
        else if (A[i] > B[j])
            j++;
        else
            res = {A[i], B[j]};
            break;
    }
    cout << res.first << ' ' << res.second ;
}