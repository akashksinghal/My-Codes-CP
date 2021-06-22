#include<bits/stdc++.h>
using namespace std;

void delete_middle_stack(stack<int> &st, int siz){
    if(siz==1){
        st.pop();
        return;
    }
    int val = st.top();
    st.pop();
    delete_middle_stack(st, siz-1);
    st.push(val);
}

int main() {
    int n;
    cin >> n;
    stack<int> A;
    for(int i=0,k;i<n;i++){
        cin >> k;
        A.push(k);
    }
    delete_middle_stack(A, (A.size()/2)+1);
    while(!A.empty()){
        cout << A.top() << ' ';
        A.pop();
    }
}
