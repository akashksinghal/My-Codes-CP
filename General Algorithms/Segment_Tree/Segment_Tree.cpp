template<typename item> 

struct segTree{

    int arraySize, segSize = 1; // arraySize = inputSize, segSize = size of segment tree. 
    vector<item> seg; // This vector contains all the nodes of generated segment tree

    // Constructor to update the segment_tree's size
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

    item NEUTRAL_ELEMENT =  {0};

    item merge(item a, item b){
        item return_value;
        // return_value depends on the how the two nodes are merging 
        return return_value;
    }

    // Single or multiple Arguments depending upon question
    item single(int v) {
        // item item_variable = {v};
        // return item_variable;
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

    // update function updates the value of the required index(idx)
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

    // query function returns the answer with inclusive range [l,r]
    item query(int l, int r){
        return query(0, l, r, 0, arraySize);
    }

};