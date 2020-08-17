// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    int n, moves = 0, a = 0, b = 0;
    cin>>n;
    vector<int> A(n);
    input(A,n);
    ll lo = 0, high = n-1, chance = 0, prev_a = 0, prev_b = 0;
    while(lo<=high){
        if(chance&1^1){
            ll eaten = 0;
            while(eaten<=prev_b && high>=lo){
                eaten+=A[lo++];
            }
            prev_a=eaten;
            a+=eaten;
        }
        else{
            ll eaten = 0;
            while(eaten<=prev_a && high>=lo){
                eaten+=A[high--];
            }
            prev_b=eaten;
            b+=eaten;
        }
        chance++;
        moves++;
    }
    cout<<moves<<" "<<a<<" "<<b<<"\n";
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