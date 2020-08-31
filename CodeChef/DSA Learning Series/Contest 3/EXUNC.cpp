//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N+1,1e6+3);
    for(int i=1;i<=N;i++) cin >> A[i]; 
    set<int> st;
    st.insert(1);
    for (int i = 2; i <= N; i++) {
        if(A[i]%A[i-1]!=0) st.insert(i);
    }
    for(int i=1, option, index, value;i<=Q;i++){
        cin >> option;
        if(option == 1){
            cin >> index >> value;
            A[index] = value;
            if (A[index] % A[index - 1] != 0)
                st.insert(index);
            else
                st.erase(index);
            if (A[index + 1] % A[index] != 0)
                st.insert(index + 1);
            else
                st.erase(index + 1);
        }
        else{
            cin >> index ;
            cout << *(--st.upper_bound(index)) << '\n';
        }
    }
    return 0;
}