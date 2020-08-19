//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    int A, rank;
    ll laddu = 0;
    string B,C;
    cin >> A >> B;
    if(B=="INDIAN"){
        while(A--){
           cin >> C;
           if(C=="CONTEST_WON"){
               cin >> rank;
               laddu += 300 + max(0, 20 - rank);
           } 
           else if(C=="TOP_CONTRIBUTOR"){
               laddu += 300;
           }
           else if(C=="BUG_FOUND"){
               cin >> rank;
               laddu += rank;
           }
           else{
               laddu += 50;
           }
        }
        cout << laddu/200 << '\n'; 
    }
    else{
        while(A--){
           cin >> C;
           if(C=="CONTEST_WON"){
               cin >> rank;
               laddu += 300 + max(0, 20 - rank);
           } 
           else if(C=="TOP_CONTRIBUTOR"){
               laddu += 300;
           }
           else if(C=="BUG_FOUND"){
               cin >> rank;
               laddu += rank;
           }
           else{
               laddu += 50;
           }
        }
        cout << laddu/400 << '\n'; 
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