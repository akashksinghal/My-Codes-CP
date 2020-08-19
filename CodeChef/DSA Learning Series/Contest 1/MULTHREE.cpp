#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    ll k, d0,d1;
    cin >> k >> d0 >> d1;
    ll sum = (d0+d1)%10;
    vector<int> ans;
    ans.push_back((d0+d1+sum)%10);
    ans.push_back((d0+d1+sum+ans[0])%10);
    ans.push_back((d0+d1+sum+ans[0]+ans[1])%10);
    ans.push_back((d0+d1+sum+ans[0]+ans[1]+ans[2])%10);
    // ll sm = ans[0]*1000 + ans[1]*100 + ans[2]*10 + ans[3];
    k-=3;
    ll tp = 0 ,tp2=0;
    for(auto i:ans){
        tp+=i;
    }
    ll required = k/4;
    ll tmp = k%4;
    ll required_sum = d0+d1+sum+tp*required;
    for(int i=0;i<tmp;i++)
        required_sum+=ans[i];
    if(required_sum%3==0)
        cout<<"YES\n";
    else{
        cout<<"NO\n";
    }
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}