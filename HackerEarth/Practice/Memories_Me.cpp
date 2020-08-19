#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[100000]={0};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int K,Q,temp;
    cin>>K;
    for (int i = 0; i < K; i++){
        cin>>temp;
        A[temp]++;
    }
    cin>>Q;
    while(Q--)
    {
        cin>>temp;
        if(A[temp]!=0)
            cout<<A[temp]<<"\n"; 
        else
            cout<<"NOT PRESENT\n";
    }   
}