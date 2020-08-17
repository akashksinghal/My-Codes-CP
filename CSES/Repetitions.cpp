#include<bits/stdc++.h>
using namespace std;
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    string A;
    cin>>A;
    int ans = 1, cur = 1;
    for(int i=1;i<(int)A.size();i++){
        if(A[i]==A[i-1]) cur++;
        else cur = 1;
        ans = max(cur,ans);
    }
    cout<<ans;
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// #define fasino ios_base::sync_with_stdio(false); cin.tie(0);
// int main()
// {
//     fasino
//     string A;
//     cin>>A;
//     map<char,int> mp;
//     mp['A']=0;
//     mp['G']=0;
//     mp['T']=0;
//     mp['C']=0;
//     for(int i=0;i<A.size();i++){
//         int j=i;
//         while(A[++i]==A[j] and i < A.size()){
//             // i++;
//         }
//         i--;
//         // cout<<j<<" "<<i<<" "<<'\n';
//         mp[A[j]]=max(mp[A[j]],min((int)(A.size()),(i-j+1)));
//     }
//     cout<<max(mp['A'],max(mp['G'],max(mp['T'],mp['C'])));
//     return 0;
// }