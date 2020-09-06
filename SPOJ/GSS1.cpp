//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;

#define int long long

struct item{
    int seg,pref,suf,sum;
};

struct segTree{

    int arraySize, segSize = 1;
    vector<item> seg; 
    segTree(int N){
        while(segSize<N) segSize<<=1;
        seg.resize(2*segSize);
    }

    item NEUTRAL_ELEMENT = {0,0,0,0};

    item merge(item a, item b){
        return {
            max(a.seg,max(b.seg, a.suf + b.pref)),
            max(a.pref, a.sum + b.pref),
            max(b.suf, b.sum + a.suf),
            a.sum + b.sum
        };
    }

    item single(int v) {
        return {v, v, v, v};
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
        if (l > rx or r < lx or l>r)
            return single((int)-1e12);
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

};

signed main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int N,Q;
    cin >> N;
    segTree s(N);
    vector<int> A(N);
    for(auto &i: A) cin >> i;
    s.bulid(A);
    // cout << s.query(0,N-1).seg << '\n';
    cin >> Q;
    while(Q--){
        int l, r; cin >> l >> r;
        cout << s.query(l-1,r-1).seg << '\n';
    }
}