#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
void solve()
{
    ll a,b;
    cin>>a>>b;    
    if(b==0){
        cout<<"1\n";return;}
    ll p=a%10;
    ll q=b%4;
    if(b==0)
        cout<<"1";
    else if(p==1||p==0||p==5||p==6)
        cout<<p;
    else if(q==1)
        cout<<p;
    else if(q==2)
        cout<<((p*p)%10);
    else if(q==3)
        cout<<((p*p*p)%10);
    else if(q==0)
        cout<<((p*p*p*p)%10);
    cout<<"\n";
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