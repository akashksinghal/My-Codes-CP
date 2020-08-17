// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve(string A)
{
    int rv = 0,brs = 0;
    for(auto i:A){
        if(i=='{') brs++;
        if(i=='}' and brs>0) brs--;
        else if( i=='}'&& brs<=0 ) { rv++; brs++; }
    }
    rv = rv + ceil(brs/2.000);
    cout<<rv<<'\n';
}
signed main()
{
    fasino
    for(int i=1;;i++)
    {
        string A;
        cin>>A;
        if(A[0]=='-') return 0 ;
        cout<<i<<". ";
        solve(A);
    }
    return 0;
}