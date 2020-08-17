// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
pair<string,string> divide(string A){
    string first = "", sec = "";
    for(int i=0;i<A.size()/2;i++){
        first+=A[i];
    }
    for(int i=A.size()/2;i<A.size();i++){
        sec+=A[i];
    }
    return {first,sec};
}
ll countch(string J, char ch){
    ll res = 0;
    for(auto i:J){
        res += (i==ch);
    }
    return res;
}
int ans(string A, char ch)
{
    if(A.size()==1){
        if(A[0]==ch){
            return 0;
        }
        else 
            return 1;
    }
    pair<string,string> st = divide(A);
    ll fisch = countch(st.first,ch), secch = countch(st.second,ch), siz = A.size()/2, res;
    if(fisch==siz){
        return ans(st.second,ch+1);
    }
    else if(secch==siz){
        return ans(st.first,ch+1);
    }
    return min(max((siz-fisch),0LL) + ans(st.second,ch+1),max((siz-secch),0LL) + ans(st.first,ch+1));
}
void solve()
{
    ll n;
    cin>>n;
    string A;
    cin>>A;
    cout<<ans(A,'a')<<'\n';
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