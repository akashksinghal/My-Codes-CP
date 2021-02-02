#include <bits/stdc++.h>
using namespace std;

#define int long long int

struct segTree{

    int arraySize, segSize = 1;
    vector<int> seg;

    segTree(int N){
        while(segSize<N) segSize<<=1;
        seg.resize(2*segSize);
    }

    void build(vector<int> &A, int node, int l, int r){
        if(l==r){
            seg[node] = single(A[l]);
            return;
        }
        int mid = (l + r) >> 1;
        build(A, 2 * node + 1, l, mid);
        build(A, 2 * node + 2, mid + 1, r);
        seg[node] = merge(seg[2 * node + 1], seg[2 * node + 2]);
    }

    int NEUTRAL_ELEMENT =  {0};

    int merge(int a, int b){
        return __gcd(a,b);
    }

    int single(int v) {
        return v;
    }

    void bulid(vector<int> &A){
        arraySize = A.size() - 1;
        build(A, 0, 0, arraySize);
    }

    void update(int idx, int val, int node, int l, int r){
        if(idx<l || idx>r) return;
        if (l == r) {
            seg[node] = single(val);
            return;
        }
        int mid = (l + r) >> 1;
        update(idx, val, 2 * node + 1, l, mid);
        update(idx, val, 2 * node + 2, mid + 1, r);
        seg[node] = merge(seg[2 * node + 1], seg[2 * node + 2]);
    }

    int query(int node, int l, int r, int lx, int rx){
        if (l > rx or r < lx)
            return NEUTRAL_ELEMENT;
        if (lx >= l and rx <= r)
            return seg[node];
        int mid = (lx + rx) / 2;
        int k = query(2 * node + 1, l, r, lx, mid);
        int m = query(2 * node + 2, l, r, mid + 1, rx);
        return merge(k,m);  
    }

    int query(int l, int r){
        return query(0, l, r, 0, arraySize);
    }

};

signed main()
{
    int n, j = 0, i = 0, k;
    int ans = 1e18;
    bool flag = false;
    cin >> n;
    vector<int> A(n);
    for (auto &i : A) cin >> i;
    segTree s(n);
    s.bulid(A);
    while (i < n) {         
        if(s.query(j,i)!=1){
            i++;
            continue;
        }
        while(s.query(j,i)==1 and j <= i){
            flag = true;
            int m = i-j+1;
            j++;
            if (m < ans)
                ans = m;
        }
        i++;
    }
    cout << ((flag) ? ans : -1);
}