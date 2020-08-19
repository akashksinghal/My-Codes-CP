#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main() {
	ll T;
	cin>>T;
	ll res=0;
	vector<ll> A(T);
	ll a;
	for (ll i=0; i<T; i++) {
	    cin>>A[i];
	}
	sort(A.begin(),A.end());
	for (ll i=0; i<T; i++) {
	    A[i]=A[i]*(T-i);
	    if(A[i]>res) 
	        res=A[i];
	}
    cout << res;
    return 0;
}
