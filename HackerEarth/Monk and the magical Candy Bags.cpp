#include<bits/stdc++.h>
using namespace std;
#define loop(k,n) for(auto i=k;i<n;i++)
#define ll long long
int main()
{
    priority_queue<ll> vec;
    int N;
    ll t1,t2,tmp;
    cin >> N ;
    loop(0,N)
    {
        cin>>t1>>t2;
        loop(0,t1)
        {
            cin>>tmp;
            vec.push(tmp);
        }
        ll sum=0;
        loop(0,t2)
        {
            tmp=vec.top();
            sum+=(tmp);
            vec.pop();
            vec.push(floor(tmp/2));
        }
        cout<<sum<<endl;
        while(!vec.empty())
            vec.pop();
    }
}