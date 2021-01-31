#include<bits/stdc++.h>
using namespace std;

#define m 1000000007
#define ll long long int

long long binpow(long long a, long long b) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}


int main(){
    ll n;
    cin >> n;
    cout << binpow(2,n);   
}