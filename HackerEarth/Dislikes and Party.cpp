#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) scanf("%lld",&A[i]);
void solve()
{
    ll N,temp,hell;
    cin>>N;
    ll int A[10][10];
    map<ll int , vector<ll int> > choice;
    for(int i=0;i<10;i++)
    {
        cin>>hell;
        for(int j=0;j<9;j++)
        {
            cin>>temp;
            choice[hell].push_back(temp);
        }
    }
    ll int handshakes = (N*(N-1))/2;
    //cout<<"HELLO"<<handshakes;
    for(auto i: choice)
    {
        for(int j=0;j<9;j++)
        {
            if(choice.find(i.second[j])!=choice.end())
            {
                for(int k=0;k<9;k++)
                {
                    if(choice[i.second[j]][k]==i.first)
                        choice[i.second[j]][k]=-1;
                }
            }
            if(i.second[j]!=-1)
                handshakes--;            
        }
    }
    cout<<"\nHAND:"<<handshakes<<endl;
}
int main()
{
    solve();
    return 0;
}