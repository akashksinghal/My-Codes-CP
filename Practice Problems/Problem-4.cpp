/*
Number of three numbers in given array is equal to given num
Required Complexity: O(n^2)

Input : 
8
-8 -6 1 2 3 5 6 12
0
Output :
-8 2 6
-8 3 5
-6 1 5
*/
#include<bits/stdc++.h>
using namespace std;

#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    input(A);
    int target_sum;
    cin >> target_sum;
    sort(A.begin(), A.end()); // O(n*Log(n))
    vector<array<int,3>> res;
    for(int i=0;i+2<n;i++){ // O(n^2)
        int l = i+1, r = n-1;
        while(l<r){
            if(A[i]+A[l]+A[r]==target_sum){
                res.push_back({A[i],A[l],A[r]});
                l++, r--;
            }
            else if(A[i]+A[l]+A[r]<target_sum){
                l++;
            }
            else{
                r--;
            }
        }
    }
    for(auto i:res){
        for(auto j:i) cout << j << ' ';
        cout << '\n';
    } 
    return 0;
}

// Overall Complexity: O(n^2) 