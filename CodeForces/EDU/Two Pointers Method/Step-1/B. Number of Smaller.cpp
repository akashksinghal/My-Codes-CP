#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<long> A(n), B(m);
    for(auto &i:A) cin >> i;
    for(auto &i:B) cin >> i;
    int i=0,j=0;
    for(j=0;j<m;j++){
        while(B[j]>A[i] and i < n){
            i++;
        }
        cout << i << ' ';
    }
}