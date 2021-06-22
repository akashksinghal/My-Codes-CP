#include<bits/stdc++.h>
using namespace std;

void recur(string inp, string op){
    if(inp==""){
        cout << op << '\n';
        return;
    }
    string op1 = op;
    string op2 = op + inp.front();
    inp.erase(inp.begin());
    recur(inp, op1);
    recur(inp, op2);
}

int main(){
    string inp = "abc", op = "";
    recur(inp,op);
}