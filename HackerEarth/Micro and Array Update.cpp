#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int A,B,min,temp;
        cin>>A>>B;
        for(int i=0;i<A;i++)
        {
            cin>>temp;
            if(i==0)
                min=temp;
            else
            {
                if(min>temp)
                    min=temp;
            }
        }
        if(min<=B)
        {
            cout<<(B-min)<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        
    }
}