// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n, idx = 0;
    bool flag = false;
    cin>>n;
    vector<ll> A(n);
    input(A);
    vector<ll> mini_left(n),mini_right(n);
    mini_left[0] = A[0];
    mini_right[n-1] = A[n-1];
    for(int i=1;i<n;i++){
        mini_left[i] = min(A[i],mini_left[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        mini_right[i] = min(A[i], mini_right[i+1]);
    }
    for(int i=1;i<n-1;i++){
        if(A[i]>mini_left[i-1] and A[i]>mini_right[i+1])
        {
            flag = true;
            idx = i;
            break;
        }
    }
    if(!flag) cout<<"NO\n";
    else{
        cout<<"YES\n";
        for(int i=0;i<idx;i++) if(A[i]<A[idx]){ cout<<i+1<<" "; break;}
        cout<<idx+1<<" ";
        for(int i=n-1;i>idx;i--) if(A[i]<A[idx]) {cout<<i+1<<' '; break;}
        cout<<"\n";
    }
}
signed main()
{
    fasino
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}