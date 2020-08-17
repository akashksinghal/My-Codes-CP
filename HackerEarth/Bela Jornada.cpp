#include <iostream>
using namespace std;
int main() 
{
    long long int n;
    cin>>n;
    long long int sum=0;
    long long int arr[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    long long int sum1=0; 
    long long max=0;
    for(long long int k=0;k<n;k++)
    {
        sum1=sum1+arr[k];
        long long int p=sum1*(sum-sum1);
        if(p>max)
            max=p;
    }
    cout<<max;
}