#include<bits/stdc++.h>
using namespace std;
long long factorial(long long n) 
{ 
    return (n==1 || n==0) ? 1: n * factorial(n - 1);  
} 
int main()
{
    long long M,N;
    cin>>N>>M;
    auto s=1;
    for(int i=0;i<M;i++)
    {
        s=s*(M-i);
    }
    cout<<(s%(long long)(pow(10,9)+7));
}