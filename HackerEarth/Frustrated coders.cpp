#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    cin>>N;
    vector<long long> A;
    stack<long long> stk;
    while(N--)
    {
        long long temp;
        cin>>temp;
        A.push_back(temp);
    }
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();i++)
    {
        if(stk.empty())
            stk.push(A[i]);
        else
        {
            if(stk.top()<A[i]){
                stk.pop();
                stk.push(A[i]);
            }
        }
    }
    long long sum=0;
    while(!stk.empty())
    {    
        sum+=stk.top();
        stk.pop();
    }
    cout<<sum<<endl;

}