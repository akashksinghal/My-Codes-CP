#include<bits/stdc++.h>
using namespace std;

bool binary(int val,int low, int high, vector<int> &A){
    int mid;
    while(low<=high){
        int mid = (low + high) / 2;
        if(A[mid]==val){
            return true;
        }
        if(A[mid]<val){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return false;
}

int main(){
    int n,k,val;
    cin >> n >> k;
    vector<int> A(n);
    for(int i=0;i<n;i++) cin >> A[i];
    for(int i=0;i<k;i++){
        cin >> val;
        bool ans = binary(val,0,n-1,A);
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
}