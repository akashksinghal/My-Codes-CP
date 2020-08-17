#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll Dis,OC,OF,OD,CS,CB,CM,Cd;
    cin>>Dis>>OC>>OF>>OD>>CS>>CB>>CM>>Cd;
    ll Online = OC + ((Dis - OF)*OD) ;
    ll Offline = CB + (Dis/CS)*CM + (Dis*Cd);
    if(Online<=Offline)
    {
        cout<<"Online Taxi";
    }
    else
    {
        cout<<"Classic Taxi";
    }   
}