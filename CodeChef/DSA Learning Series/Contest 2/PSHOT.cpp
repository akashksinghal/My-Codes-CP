//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n, winA = 0, winB = 0, FinA = 0, FinB = 0, i = 0;
    cin >> n;
    FinA = FinB = n;
    string A;
    cin >> A;
    for(i=0;i<2*n;i++){
        if(i&1){ 
            if(A[i]=='1'){winA++;}
            --FinA;
        }
        else{
            if(A[i]=='1'){winB++;}
            --FinB;
        }
        if((winB-winA)>FinA || (winA-winB)>FinB){
            ++i;
            break;
        }
    }
    cout << i << '\n';
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