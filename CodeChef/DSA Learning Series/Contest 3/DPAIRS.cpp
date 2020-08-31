#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
int main() {
    
	long n,m,temp;
	cin>>n>>m;
	vector<pair<ll,ll> >V1(n);
	vector<pair<ll,ll> >V2(m);
	for(int i =0;i<n;i++)
	{
	    cin>>temp;
	    V1[i].first = temp;
	    V1[i].second = i;
	}
	for(int i =0;i<m;i++)
	{
	    cin>>temp;
	    V2[i].first = temp;
	    V2[i].second = i;
	}
	sort(V1.begin(),V1.end());
	sort(V2.begin(),V2.end());
	for(int i = 0;i<m;i++)
	    cout<<V1[0].second<<" "<<V2[i].second<<"\n";
	for(int i =1;i<n;i++)
	    cout<<V1[i].second<<" "<<V2[m-1].second<<"\n";
	return 0;
}
