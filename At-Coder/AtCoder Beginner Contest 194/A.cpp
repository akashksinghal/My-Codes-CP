//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    int a , b;
    cin >> a >> b;
    if(a+b >= 15 and b >=8 ) {
        cout << 1 ;
    }
    else if(a+b >= 10 and b >= 3) {
        cout << 2 ;
    }
    else if(a+b >= 3){
        cout << 3;
    }
    else {
        cout << 4;
    }
    return 0;
}