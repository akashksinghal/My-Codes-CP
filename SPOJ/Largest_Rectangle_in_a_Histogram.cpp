// author : @akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n;
    while(true){
        cin >> n;
        if(n==0) break;
        vector<ll> A(n);
        input(A);
        stack<ll> st;
        ll maxi_area = 0, top = 0, temp, i=0;
        while(i<n){
            if( st.empty() || A[st.top()] <= A[i]){
                st.push(i++);
            }
            else{
                temp = st.top();
                st.pop();
                ll tmp;
                if(st.empty()) tmp = i;
                else tmp = ((i-1) - st.top());
                top = ((A[temp]) * (tmp));
                maxi_area = max(maxi_area, top);
            }
        }
        while(!st.empty()){
            temp = st.top();
            st.pop();
            ll tmp;
            if(st.empty()) tmp = i;
            else tmp = ((i-1) - st.top());
            top = ((A[temp]) * (tmp));
            maxi_area = max(maxi_area, top);
        }
        cout << maxi_area << '\n';
    }
    return 0;
}