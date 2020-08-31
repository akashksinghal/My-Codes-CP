//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll imps, votes;
    string a,b;
    cin>>imps>>votes;
    unordered_map<string, string > mp;
    for(ll i=0;i<imps;i++){
        cin>>a>>b;
        mp[a]=b;
    } 
    unordered_map<string,ll> chefs;
    unordered_map<string,ll> countries;
    ll maxi_vote_chef = INT32_MIN;
    ll maxi_vote_country = INT32_MIN;
    string maxi_country = "";
    string maxi_chef = "";
    for(ll i=0;i<votes;i++){
        cin>>a;
        chefs[a]++;
        countries[mp[a]]++;
    }
    for(auto i:countries){
        // cout<<i.first<<" "<<i.second<<"\n";
        if(maxi_country=="")
        {
            maxi_country=i.first;
            maxi_vote_country=i.second;
        }
        else{
            if(i.second==countries[maxi_country]){
                maxi_country = min(maxi_country,i.first);            
            }
            else if(i.second>countries[maxi_country]){
                maxi_country=i.first;
                maxi_vote_country=i.second;
            }
        }
    }
    for(auto i:chefs){
        // cout<<i.first<<" "<<i.second<<"\n";
        if(maxi_chef=="")
        {
            maxi_chef=i.first;
            maxi_vote_chef=i.second;
        }
        else{
            if(i.second==chefs[maxi_chef]){
                maxi_chef = min(maxi_chef,i.first);            
            }
            else if(i.second>chefs[maxi_chef]){
                maxi_chef=i.first;
                maxi_vote_chef=i.second;
            }
        }
    }
    
    cout<<maxi_country<<"\n"<<maxi_chef;
    return 0;
}