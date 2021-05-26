//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    int n; cin >> n;
    vector<int> A(n); input(A);
    int sum = 0, cnt = n-1, po = 0;
    int k = accumulate(A.begin(),A.end(),0);
    // cout << k << ' ';
    for(auto i:A){
        sum += (n-1)*(i*i);
    }
    // cout << sum << '\n';
    for(auto i:A){
        po += (i)*(k-i);
        // cout << (i)*(k-i) << ' ';
    }
    // cout << po << ' ';
    cout << sum-po ;
    // po*=2;
    return 0;
}