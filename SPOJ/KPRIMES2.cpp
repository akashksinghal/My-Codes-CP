#include<bits/stdc++.h>
// #include<chrono>

using namespace std;
// using namespace std::chrono; 
const long long mxN = 82451660; // 

bool prime[mxN+2];
vector<long long> primes;

void seive(){

    prime[0]=prime[1]=true;
    for(long long i=4;i<=mxN;i+=2){
        prime[i] = true;
    }
    for(long long i=6;i<=mxN;i+=3){
        prime[i] = true;
    }
    for(long long i=5;i*i<=mxN;i++){
        if(!prime[i]){
            for(long long j=i*i;j<=mxN;j+=i){
                prime[j] = true;
            }
        }
    }
    for(int i=2;i<=mxN;i++){
        if(!prime[i]){
            primes.push_back(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
    #endif
    long long t,n;
    cin>>t;
    seive();
    while(t--){
        cin>>n;
        cout<<primes[n-1]<<'\n';
    }
}