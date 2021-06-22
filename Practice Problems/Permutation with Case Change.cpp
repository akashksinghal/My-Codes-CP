#include<bits/stdc++.h>
using namespace std;

void permuta(string A, string op){
    if(A==""){
        cout << op << '\n';
        return;
    }
    if(*A.begin()>='1' and *A.begin()<='9'){
        op += *A.begin();
        A.erase(A.begin());
        permuta(A,op);
        return;    
    }
    string op1 = op + (char)toupper(*A.begin()) ;
    string op2 = op + (char)(tolower(*A.begin()));
    A.erase(A.begin());
    permuta(A,op1);
    permuta(A,op2);
}

int main(){
    string A;
    cin >> A;
    string op = "";
    permuta(A, op);
}