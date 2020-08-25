#include<bits/stdc++.h>
using namespace std;
int precedence(char A)
{
    if(A == '^') 
        return 3;
    else if(A=='*' || A=='/')
        return 2;
    else if(A=='-' || A=='+')
        return 1;
    else
        return -1; 
}
void infix(string str)
{
    stack<char> stk;
    string res = "";
    for(auto i:str)
    {
        if((i>='A' && i<='Z')|| (i>='a' && i<='z')) res+=i;
        else if(i=='(') stk.push(i);
        else if(i==')') {
            while(!stk.empty() && stk.top()!='(') {
                res+=stk.top();
                stk.pop();
            }
            if(stk.top()=='(') stk.pop();
        }
        else {
            while ((!stk.empty()) && (precedence(i) <= precedence(stk.top()))) {
                res+=stk.top();
                stk.pop();
            }
            stk.push(i); 
        }
    }
    while(!stk.empty()){
        res+=stk.top();
        stk.pop();
    }
    cout << res << '\n';        
}
int main() 
{ 
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int N;
        string A;
        cin >> N >> A;
        infix(A);
    }
    return 0; 
} 