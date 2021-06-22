#include<bits/stdc++.h>
using namespace std;

void permuta(string A, string op){
    if(A.size()==0){
        cout << op << '\n';
        return;
    }
    string op1 = op + "_" + A[0];
    string op2 = op + A[0];
    A.erase(A.begin());
    permuta(A, op1);
    permuta(A, op2);
}

int main(){
    string A = "bc", op = "a";
    permuta(A, op);
}

