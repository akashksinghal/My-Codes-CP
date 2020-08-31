//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n,Z,count=0,tmp;
    cin>>n>>Z;
    ll hashmap[10003];
    memset(hashmap,0,sizeof hashmap);
    for(ll i=0;i<n;i++){
        cin>>tmp; hashmap[tmp]++;
    }
    for(int i=10000;i>0;i--){
        while(hashmap[i] && Z>0){
            Z=Z-i;
            hashmap[i]--;
            hashmap[i/2]++;
            count++;
        }
        if(Z<=0)
            break;
    }
    if(Z<=0)
        cout<<count<<"\n";
    else
        cout<<"Evacuate\n";
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