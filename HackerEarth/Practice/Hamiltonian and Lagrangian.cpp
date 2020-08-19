#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
        cin>>A[i];
    for(int i=0;i<N-1;i++)
    {
        bool flag = true;
        for(int j=i+1;j<N;j++)
        {
            if(A[i]<A[j])
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
            cout<<A[i]<<" ";
    }
    cout<<A[N-1];
}