// author : akashksinghal
// Partitally Solved for 10 Marks
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(int i=1;i<A.size();i++) cin>>A[i];
signed main()
{
    fasino
    ll n,q, a,b,c;
    cin>>n>>q;
    vector<ll> heights(n+1), spicy(n+1);
    input(heights);
    input(spicy);
    for(int i=1;i<=q;i++)
    {
        cin>>a>>b>>c;
        if(a==1){
            spicy[b] = c; 
        }
        else if(a==2)
        {
            bool flag = true; ll ans = 0;
            if(heights[b]<heights[c]) flag = false;
            ll H_B = heights[b], H_C = heights[c];
            if(b==c) ans=spicy[b];
            else if(b>c){
                ans += spicy[b] + spicy[c];
                for(int i=c+1;i<b;i++){
                    if(heights[i]>H_C and heights[i]<H_B){
                        ans+=spicy[i];
                        H_C = heights[i];
                    }
                    else if(heights[i]<=H_C){
                        continue;
                    }
                    else{
                        flag = false;
                        break;
                    }
                }
            }
            else{
                ans += spicy[b] + spicy[c];
                for(int i=c-1;i>b;i--){
                    if(heights[i]>H_C and heights[i]<H_B){
                        ans+=spicy[i];
                        H_C = heights[i];
                    }
                    else if(heights[i]<=H_C){
                        continue;
                    }
                    else{
                        flag = false;
                        break;
                    }
                }
            }
            if(flag) cout<<ans<<'\n';
            else cout<<-1<<'\n';
        }
    } 
    return 0;
}