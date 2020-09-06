//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;

#define int long long

#define item int

struct segTree{

    int arraySize, segSize = 1;
    vector<item> seg; 
    segTree(int N){
        while(segSize<N) segSize<<=1;
        seg.resize(2*segSize);
    }

    item NEUTRAL_ELEMENT = 0;

    item merge(item a, item b){
        return a+b;
    }

    item single(int v) {
        return v;
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

    void bulid(vector<int> &A){
        arraySize = A.size() - 1;
        build(A, 0, 0, arraySize);
        // for(auto i: seg) cout << i << ' '; 
        // cout << '\n';
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

    void update(int idx, int value){
        update(idx, value, 0, 0, arraySize);
    }

    int find(int k, int x, int lx, int rx){
        if (lx == rx){
            return lx;
        }
        int m = (lx + rx) / 2;
        int s1 = seg[2 * x + 1];
        if (k < s1) {
            return find(k, 2 * x + 1, lx, m);
        }
        else{
            return find(k - s1, 2 * x + 2, m+1, rx);
        }
        return 0;
    }

    int find(int k){
        return find(k, 0, 0, arraySize);
    }

};

signed main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int N,Q;
    cin >> N;
    cin >> Q;
    segTree s(N);
    vector<int> A(N);
    for (auto &i : A)
        cin >> i;
    s.bulid(A);
    while(Q--){
        int op;
        cin >> op;
        if(op==1){
            int i;
            cin >> i;
            A[i] = 1 - A[i];
            s.update(i,A[i]);
        }
        else{
            int k;
            cin >> k;
            cout << s.find(k) << '\n';
        }
    }
}