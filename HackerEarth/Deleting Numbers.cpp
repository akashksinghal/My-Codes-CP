#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int s=(n-k+1)/2;
    s--;
    int e=s+k;
    int max=a[s];
    for(int i=s+1;i<=e;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    cout<<max;
}