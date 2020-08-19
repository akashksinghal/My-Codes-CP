// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll n;
    cin >> n;
    vector<ll> arr(n);
    priority_queue<int> pq, q;
    for (ll i= 0; i < n; i++)
    {
        cin >> arr[i];
        pq.push(arr[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] == pq.top())
        {
            cout << arr[i] << " ";
            pq.pop();
            while (!q.empty() && !pq.empty())
            {
                if (q.top() == pq.top())
                {
                    cout << q.top() << " ";
                    pq.pop();
                    q.pop();
                }
                else
                {
                    break;
                }
            }
            cout << "\n";
        }
        else
        {
            cout << "\n";
            q.push(arr[i]);
        }
    }
    return 0;
}