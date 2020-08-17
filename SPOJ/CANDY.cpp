#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    while(true)
    {
        ll N, sum = 0 ;
        cin>>N;
        if(N==-1)
            break;
        vector<ll> A(N);
        input(A,N);
        for(auto i:A) sum+=i;
        if((sum%N)!=0)
        {
            cout<<-1<<"\n";
            continue;
        }
        else
        {
            sum/=N;
            ll less =0, more = 0;
            for(auto i:A)
            {
                if(i>sum)
                    more+= (i-sum);
                else
                    less+= (sum-i);
            }
            if(less!=more)
                cout<<"-1\n";
            else
                cout<<more<<"\n";
        }
        

    }
    return 0;
}