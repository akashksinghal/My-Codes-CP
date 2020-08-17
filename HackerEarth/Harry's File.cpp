// I'm a f*cking looser
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
    string A;
    cin>>A;
    int a = A.size(),b,c;
    for(int i=a-1;i>=0;i--){
        if(A[i]=='.'){
            b = i;
        }
        if(A[i]=='\\'){
            c = i;
            break;
        }
    }
    // cout<<b<<" "<<c<<'\n';
    string a1(A.begin()+b+1,A.end());
    string a2(A.begin()+c+1,A.begin()+b);
    string a3(A.begin(),A.begin()+c+1);
    cout<<"Path: "<<a3<<'\n';
    cout<<"File Name: "<<a2<<'\n';
    cout<<"Extension: "<<a1<<'\n';
    // cout<<a1<<" "<<a2<<" "<<a3;
    return 0;
}