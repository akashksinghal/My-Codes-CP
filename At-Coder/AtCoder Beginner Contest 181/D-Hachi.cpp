//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
bool solve(string n, int l)
{
    if (l < 3)
    {
        if (stoi(n) % 8 == 0)
            return true;
        reverse(n.begin(), n.end());
        if (stoi(n) % 8 == 0)
            return true;
        return false;
    }

    int arr[10] = {0};
    for (int i = 0; i < l; i++)
        arr[n[i] - '0']++;
    for (int i = 104; i < 1000; i += 8)
    {

        int HIK = i;
        int count[10] = {0};
        count[HIK % 10]++;
        HIK = HIK / 10;
        count[HIK % 10]++;
        HIK = HIK / 10;
        count[HIK % 10]++;
        HIK = i;

        if (count[HIK % 10] > arr[HIK % 10])
            continue;
        HIK = HIK / 10;

        if (count[HIK % 10] > arr[HIK % 10])
            continue;
        HIK = HIK / 10;

        if (count[HIK % 10] > arr[HIK % 10])
            continue;

        return true;
    }
    return false;
}
signed main()
{
    fasino
    string A;
    cin >> A;
    if(solve(A,(int)A.size())){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}