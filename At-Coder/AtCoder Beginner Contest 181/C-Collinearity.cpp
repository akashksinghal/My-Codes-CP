//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n;
    cin >> n;
    vector<pair<int,int>> A(n);
    for(auto &i:A) cin >> i.first >> i.second;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int x1 = A[i].first, x2 = A[j].first, x3 = A[k].first;
                int y1 = A[i].second, y2 = A[j].second, y3 = A[k].second;
                if((y1 - y2) * (x1 - x3) == (y1 - y3) * (x1 - x2)){
                    cout << "Yes";
                    return 0;
                }
            }
        }
    }
    cout << "No";
    return 0;
}