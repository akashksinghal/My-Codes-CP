#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define for0(n) for(int i=0;i<n;i++)
void solve()
{
    int N,Q,K;
    cin>>N;
    bool flag = false;
    vector<int> A(N);
    for0(N) cin>>A[i];
    cin>>Q>>K;
    int sum = 0,harry=0,coins=0,check=0;
    for0(Q)
    {
        string ss;
        cin>>ss;
        if(ss=="Harry")
        {
            sum+=A[harry++];
            coins++;
        }
        else
        {
            sum-=A[harry++];
            coins--;
        }
        if(sum==K)
        {    
            flag=true;        
            check=coins;
        }
    }
    if(flag)
        cout<<coins<<endl;
    else
    {
        cout<<"-1"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    #ifndef AKS
    freopen("a_example.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif
    int testcase=1;
    //cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}