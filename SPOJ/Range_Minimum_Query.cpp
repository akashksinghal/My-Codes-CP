// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
#define N 100001
int seg[4*N], A[N];
void build(int idx, int start, int end){
    if(start == end){
        seg[idx] = A[start];
        return;
    }
    int mid = start + (end-start)/2;
    build(2*idx+1,start,mid);
    build(2*idx+2,mid+1, end);
    seg[idx] = min(seg[2*idx+1], seg[2*idx+2]);
    return;
}
int query(int idx, int start, int end,int l,int r){
    if(r<start or l>end) return INT16_MAX;
    if(start>=l and end<=r){
        return seg[idx];
    }
    int mid = (start+end)/2;
    int lf = query(2*idx+1,start,mid,l,r);
    int ryt = query(2*idx+2,mid+1,end,l,r);
    return min(lf, ryt);
}
signed main()
{
    fasino
    int n,q,l,r;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    build(0,0,n-1);
    cin>>q;
    while(q--){
        cin>>l>>r;
        cout<<query(0,0,n-1,l,r)<<'\n';
    }
    return 0;
}