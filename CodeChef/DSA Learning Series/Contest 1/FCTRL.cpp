#include <iostream>
using namespace std;

int main() {
	long long N;
	int T;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    long count =0 ;
	    for(long long i=5;(N/i)>=1;i*=5)
	        count+=(N/i);
	   cout<<count<<"\n";
	}
	return 0;
}
