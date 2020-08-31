//author : akashksinghal
#include <bits/stdc++.h>
using namespace std;

struct segTree{
    long long size, N;
    vector<long long> res_mini;
    void init(int sz){
        size = 1; N = sz;
        while (size < sz){
            size *= 2;
        }
        res_mini.assign(2 * size, 1e10);
    }

    void build(vector<long long> &A, int node, int l, int r){
        if(l==r){
            res_mini[node] = A[r];
            return;
        }
        int mid = (l + r) / 2;
        build(A, 2 * node + 1, l, mid);
        build(A, 2 * node + 2, mid + 1, r);
        res_mini[node] = min(res_mini[2 * node + 1], res_mini[2 * node + 2]);
    }

    void build(vector<long long> &A){
        build(A, 0, 0, A.size()-1);
    }

    void update(int index, long long value, int node, int l, int r){
        if(index<l or index >r) return;
        if(l==r) {
            res_mini[node] = value;
            return;
        }
        int mid = (l + r) / 2;
        update(index, value, 2 * node + 1, l, mid);
        update(index, value, 2 * node + 2, mid + 1, r);
        res_mini[node] = min(res_mini[2 * node + 1], res_mini[2 * node + 2]);
    }

    void update(int index, long long value){
        update(index, value, 0, 0, N-1);   
    }

    long long query(int l, int r, int node, int lx, int rx){
        if(l>rx or r<lx) return 1e18;
        if(lx>=l and rx<=r) return res_mini[node];
        int mid = (lx + rx) / 2;
        long long s1 = query(l, r, 2 * node + 1, lx, mid);
        long long s2 = query(l, r, 2 * node + 2, mid + 1, rx);
        return min(s1,s2);
    }

    long long query(int l, int r){
        return query(l, r, 0, 0, N-1);
    }
};

int main(){

    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    segTree sT;
    int N, M, op;
    cin >> N >> M;
    vector<long long> A(N);
    for(auto &i:A) cin >> i;
    sT.init(N);
    sT.build(A);
    while(M--){
        cin >> op;
        if(op==1){
            long long idx, value;
            cin >> idx >> value;
            sT.update(idx, value);
        }
        else{
            int l, r;
            cin >> l >> r;
            cout << sT.query(l, r - 1) << '\n';
        }
    }
    return 0;
}