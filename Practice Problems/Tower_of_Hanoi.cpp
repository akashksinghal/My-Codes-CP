#include<bits/stdc++.h>
using namespace std;
int ans = 0;
void hanoi(int n, int src, int des, int help){
    if(n==0){
        ans++;
        return;
    }
    hanoi(n-1, src, help, des);
    ans++;
    hanoi(n-1, help, des, src);
}
int main(){
    hanoi(3,0,1,2);
    cout << ans << '\n';
}