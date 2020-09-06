//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define item int

// struct item{
//     int variables;
// };


struct segTree{

    int arraySize, segSize = 1;
    vector<item> seg; 
    segTree(int N){
        while(segSize<N) segSize<<=1;
        seg.resize(2*segSize);
    }

    item NEUTRAL_ELEMENT =  INT64_MIN; // {0,0,0,0};

    item merge(item a, item b){
        return max(a,b);
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
        // for(auto i:seg) cout << i.seg << ' ';
        // cout <<'\n';
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

    item query(int node, int l, int r, int lx, int rx){
        if (l > rx or r < lx)
            return NEUTRAL_ELEMENT;
        if (lx >= l and rx <= r)
            return seg[node];
        int mid = (lx + rx) / 2;
        item k = query(2 * node + 1, l, r, lx, mid);
        item m = query(2 * node + 2, l, r, mid + 1, rx);
        return merge(k,m);
    }

    item query(int l, int r){
        return query(0, l, r, 0, arraySize);
    }

    int first_above(int x, int node, int lx, int rx){
        if(seg[node] < x) return -1;
        if(lx == rx) return lx;
        int m = (lx + rx) / 2;
        int res = first_above(x, 2*node+1, lx, m);
        if(res == -1){
            res = first_above(x, 2 * node + 2, m + 1, rx);
        }
        return res;
    }

    int first_above(int x){
        return first_above(x, 0, 0, arraySize);
    }

};

signed main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int N,Q;
    cin >> N >> Q;
    segTree s(N);
    vector<int> A(N);
    for(auto &i: A) cin >> i;
    s.bulid(A);
    while(Q--){
        int op;
        cin >> op;
        if(op == 1){
            int i,v; cin >> i >> v;
            s.update(i,v);
        }
        else{
            int x; cin >> x;
            cout << s.first_above(x) << '\n';
        }
    }
}