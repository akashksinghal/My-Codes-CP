//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    string A; cin >> A;
    for(int i=0;i<A.size();i++){
        if(i==0 and A[i]=='9'){
            cout << A[i];
        }
        else if(A[i]>='5'){
            cout << (char) ('9'- A[i]+'0');
        }
        else{
            cout << A[i];
        }
    }
    return 0;
}