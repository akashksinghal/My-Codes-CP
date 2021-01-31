#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<long> A(n), B(m);
    for(auto &i:A) cin >> i;
    for(auto &i:B) cin >> i;
    int i=0,j=0;
    while(i<n and j<m){
        if(A[i]<B[j]) {
            cout << A[i++] << ' ';
        }        
        else if(A[i]==B[j]){
            cout << A[i++] << ' ' << B[j++] << ' ';
        }
        else{
            cout << B[j++] << ' ';
        }
    }
    while(i<n){
        cout << A[i++] << ' ';
    }
    while(j<m){
        cout << B[j++] << ' ';
    }
}