//author : akashksinghal
#include<bits/stdc++.h>
using namespace std;

#define int long long

struct segTree{

    int arraySize, segSize = 1;
    vector<pair<int,int>> seg; //min, min_count
    segTree(int N){
        while(segSize<N) segSize<<=1;
        seg.resize(2*segSize);
    }

    pair<int,int> merge(pair<int,int> JI,pair<int,int> IJ){
        if(JI.first < IJ.first){
            return JI;
        }
        if(JI.first > IJ.first){
            return IJ;
        }
        return {JI.first, IJ.second+JI.second};
    }

    void build(vector<int> &A, int node, int l, int r){
        if(l==r){
            seg[node].first = A[l];
            seg[node].second = 1;
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
            seg[node].first = val;
            seg[node].second = 1;
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

    pair<int,int> query(int node, int l, int r, int lx, int rx){
        if (l > rx or r < lx)
            return {(int)1e18, 0};
        if (lx >= l and rx <= r)
            return {seg[node].first, seg[node].second};
        int mid = (lx + rx) / 2;
        pair<int,int> k = query(2 * node + 1, l, r, lx, mid);
        pair<int,int> m = query(2 * node + 2, l, r, mid + 1, rx);
        return merge(k,m);
    }

    pair<int,int> query(int l, int r){
        return query(0, l, r, 0, arraySize);
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
        int op; cin >> op;
        if(op==1){
            int idx, value; cin >> idx >> value;
            s.update(idx, value);
        }
        else{
            int l, r; cin >> l >> r ;
            pair<int, int> ans = s.query(l, r - 1);
            cout << ans.first << ' ' << ans.second << '\n';
        }
    }
}