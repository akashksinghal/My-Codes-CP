//author : akashksinghal
#include <bits/stdc++.h>
using namespace std;

struct segTree{
    long long size, N;
    vector<long long> res_sums;
    void init(int sz){
        size = 1; N = sz;
        while (size < sz){
            size *= 2;
        }
        res_sums.assign(2 * size, 0LL);
        // cout << res_sums.size() << '\n';
    }

    void build(vector<long long> &A, int node, int l, int r){
        // cout << l << ' ' << r << ' ' << node << '\n'; 
        if(l==r){
            res_sums[node] = A[r];
            return;
        }
        int mid = (l + r) / 2;
        build(A, 2 * node + 1, l, mid);
        build(A, 2 * node + 2, mid + 1, r);
        res_sums[node] = res_sums[2 * node + 1] + res_sums[2 * node + 2];
    }

    void build(vector<long long> &A){
        build(A, 0, 0, A.size()-1);
        // for(auto i: res_sums) cout << i << ' '; cout << '\n';
    }

    void set(int index, long long value, int node, int l, int r){
        if(index<l or index >r) return;
        if(l==r) {
            res_sums[node] = value;
            return;
        }
        int mid = (l + r) / 2;
        set(index, value, 2 * node + 1, l, mid);
        set(index, value, 2 * node + 2, mid + 1, r);
        res_sums[node] = res_sums[2 * node + 1] + res_sums[2 * node + 2];
    }

    void set(int index, long long value){
        set(index, value, 0, 0, N-1);
        // for(auto i: res_sums) cout << i << ' '; cout << '\n';
    }

    long long sum(int l, int r, int node, int lx, int rx){
        if(l>rx or r<lx) return 0;
        if(lx>=l and rx<=r) return res_sums[node];
        int mid = (lx + rx) / 2;
        long long s1 = sum(l, r, 2 * node + 1, lx, mid);
        long long s2 = sum(l, r, 2 * node + 2, mid + 1, rx);
        return s1 + s2;
    }

    long long sum(int l, int r){
        return sum(l, r, 0, 0, N-1);
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
            sT.set(idx, value);
        }
        else{
            int l, r;
            cin >> l >> r;
            cout << sT.sum(l, r-1) << '\n';
        }
    }
    return 0;
}