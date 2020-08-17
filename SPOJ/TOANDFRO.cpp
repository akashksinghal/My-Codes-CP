// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int n;
    cin>>n;
    while (n!=0)
    {
        string A;
        cin>>A;
        ll rows = ceil((double)A.size()/n);    
        char arr[100][21];
        int r = 0, c = 0,k=0;
        for(int i=0;i<rows;i++){
            if(i%2==0){
                for(int j=0;j<n;j++)
                {
                    if(k<A.size()){
                        arr[i][j]=A[k];
                        k++;
                    }
                }
            }
            else{
                for(int j=n-1;j>=0;j--)
                {
                    if(k<A.size()){
                        arr[i][j]=A[k];
                        k++;
                    }
                }
            }
        }
        int pr = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<rows;j++){
                if(pr>=A.size()) break;
                cout<<arr[j][i];
                pr++;
            }
            // cout<<'\n';
        }
        cout<<'\n';
        // cout<<rows<<'\n';
        cin>>n;
    }
    return 0;
}