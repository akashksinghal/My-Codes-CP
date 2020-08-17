#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    string number;
    cin>>T;
    while( T-- )
    {
        cin>>number;
        sort( number.begin(), number.end());
        char first = number[0];
        bool failed = false;
        for( int i = 0; i < number.length(); ++i )
        {
            if( first != number[i] )
            {
                failed = true;
                break;
            }
            ++first;    
        }
        if( failed )
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
}
}