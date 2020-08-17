#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,Q;
    cin >> N >>Q;
    vector<int> vec;
    for(int i =0;i<N;i++){
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    while(Q--){
        int type,l,r;
        cin >> type;
        if(type){
            cin >> l;
            vec[l-1] = 1-vec[l-1];
        }
        else{
            cin >> l >> r;
            cout << ((vec[r-1]&1)?"ODD":"EVEN") << endl;
        }
    }
}