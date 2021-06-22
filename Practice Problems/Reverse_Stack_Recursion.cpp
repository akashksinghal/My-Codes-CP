#include<bits/stdc++.h>
using namespace std;

void insert_last(stack<int> &st, int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int vall = st.top();
    st.pop();
    insert_last(st, val);
    st.push(vall);
}

void reverse_stack(stack<int> &st){
    if(st.size()==1){
        return;
    }
    int val = st.top();
    st.pop();
    reverse_stack(st);
    insert_last(st, val);
}

int main() {
    int n;
    cin >> n;
    stack<int> A;
    //Input: 5 4 3 2 1
    for(int i=0,k;i<n;i++){
        cin >> k;
        A.push(k);
    }
    // Stack Output : 1 2 3 4 5
    // while(!A.empty()){
    //     cout << A.top() << ' ';
    //     A.pop();
    // }
    reverse_stack(A);
    // Reverse Output: 5 4 3 2 1
    while(!A.empty()){
        cout << A.top() << ' ';
        A.pop();
    }
}
