//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
void solve()
{
    ll n;
    cin >> n;
    vector<ll> A(n);
    input(A); dsc(A);
    multiset<ll> st;
    ll last_element_gcd = A[0];
    for (int i = 1; i < n; i++) st.insert(A[i]);
    vector<ll> res{last_element_gcd};
    assert(res.size()==1);
    while(res.size()<n){
        ll k = last_element_gcd;
        ll jk = 0, val = 0;
        for(auto i:st){
            if(__gcd(i,k)>jk){
                jk = __gcd(i,k);
                val = i;
            }
        }
        last_element_gcd = __gcd(last_element_gcd,val);
        res.push_back(val);
        st.erase(st.find(val));
    }
    assert((ll)st.size()==0);
    for(auto i:res) cout << i << ' ';
    cout << '\n';
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