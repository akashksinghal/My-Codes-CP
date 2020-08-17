#include<bits/stdc++.h>
using namespace std;
int precedence(char A)
{
    if(A == '^') 
        return 5;
    else if(A=='/')
        return 4;
    else if(A=='*')
        return 3;
    else if(A=='-')
        return 2;
    else if(A=='+')
        return 1;
    else
        return -1; 
}
void infix(string str)
{
    stack<char> stk;
    for(int i=0;i<(int)str.length();i++)
    {
        if((str[i]>='A' && str[i]<='Z')|| (str[i]>='a' && str[i]<='z'))
            cout<<str[i];
        else if(str[i]=='(')
            stk.push(str[i]);
        else if(str[i]==')')
        {
            while(!stk.empty() && stk.top()!='(')
            {
                cout<<stk.top();
                stk.pop();
            }
            if(stk.top()=='(')
                stk.pop();
        }
        else
        {
            while((!stk.empty())&& (precedence(str[i]) <= precedence(stk.top()))) 
            { 
                cout<<stk.top(); 
                stk.pop(); 
            } 
            stk.push(str[i]); 
        }
    }
    while(!stk.empty()){
        cout<<stk.top();
        stk.pop();
    }
        
}
int main() 
{ 
    int testcase;
    // freopen("input.txt","r",stdin);
    cin>>testcase;
    while(testcase--)
    {
        string A;
        cin>>A;
        infix(A);
        cout<<"\n";
    }
    return 0; 
} 