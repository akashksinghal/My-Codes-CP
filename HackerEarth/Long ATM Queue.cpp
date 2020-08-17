#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,temp;
    cin>>N;
    vector<int> vec;
    for(int i=0;i<N;i++)
    {
        cin>>temp;
        vec.push_back(temp);
    }
    int k=1;
    for(int i=0;i<vec.size()-1;i++)
    {
        if(vec[i]>vec[i+1])
            k++;
    }
    cout<<k<<endl;
}