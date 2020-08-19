#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
void solve()
{
    string S;
    cin>>S;
    int mid = S.size()/2;
    map<char, int> fis,sic;
    for(int i=0;i<mid; i++)
        fis[S[i]]++;
    for(int i = (S.size()%2==0)?mid:mid+1;i<S.size();i++)
        sic[S[i]]++;
    bool flag = true;
    for(auto i : fis)
        if(i.second != sic[i.first])
        {
            flag = false;
            cout<<"NO"<<endl;
            return;
        }
    for(auto i : sic)
        if(i.second != fis[i.first])
        {
            flag = false;
            cout<<"NO"<<endl;
            return;
        }
    if(flag)
        cout<<"YES"<<endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}