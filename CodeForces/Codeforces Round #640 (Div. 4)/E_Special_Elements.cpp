// author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    int n , ans = 0;
    cin >> n;
    vector<int> A(n);
    input(A,n);
    vector<int> Aar(n+1,0);
    for(int i=0;i<n;i++)
    {
        int sum = A[i];
        for(int j=i+1;j<n;j++)
        {
            sum += A[j];
            if(sum > n) 
                break;
            Aar[sum]=1;
        }
    }
    for(auto i: A){
        ans += Aar[i];
    }
    cout<<ans<<'\n';
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
        solve();
    return 0;
}