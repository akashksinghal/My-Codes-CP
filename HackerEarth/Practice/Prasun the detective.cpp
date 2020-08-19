#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
    string s1, s2 ;
    getline(cin,s1);
    getline(cin,s2);
    int n1 = s1.length(), n2 = s2.length();
    map<char, int> m1, m2;
    for(int i = 0; i < n1; i++)
    {
        char ch = tolower(s1[i]);
        m1[ch]++;
    }
    for(int i = 0; i < n2; i++)
    {
        char ch = tolower(s2[i]);
        m2[ch]++;
    }
    for(int i = 0; i < n2; i++)
    {
        //char ch = tolower(s2[i]);
        if(s2[i] != ' ' && m2[s2[i]] != m1[s2[i]])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}