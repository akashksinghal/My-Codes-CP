#include<bits/stdc++.h>
using namespace std;

void generate(string cur, int ones, int zeros, int n, vector<string> &ans){
    if(ones + zeros == n){
        cout << cur << '\n';
        return;
    }
    if(ones > zeros){
        string op1 = cur + "1";
        string op2 = cur + "0";
        generate(op1, ones+1, zeros, n, ans);
        generate(op2, ones, zeros+1, n, ans);
        return;
    }
    generate(cur + "1", ones+1, zeros, n, ans);
}

int main(){
    int n;
    cin >> n;
    vector<string> ans;
    generate("",0,0,n, ans);
}