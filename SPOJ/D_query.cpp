// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
struct point {
    int left, right, block, id;
};

bool cmp(const point &lhs, const point &rhs) {
    if (lhs.block < rhs.block)
        return true;
    else if (lhs.block > rhs.block)
        return false;
    else
        return lhs.right < rhs.right;
}

signed main(){
    int n, q;
    cin>>n;
    vector<int> A(n);
    input(A);
    int block_size = sqrt(n);
    cin>>q;
    vector<point> query(q);
    for (int i = 0; i < q; i++) {
        cin>>query[i].left>>query[i].right;
        query[i].left--, query[i].right--;
        query[i].block = query[i].left / block_size;
        query[i].id = i;
    }

    sort(query.begin(), query.end(), cmp);

    vector<int> solution(q);
    vector<int> hash(1000100);

    int left = 0, right = 0, answer = 1;
    hash[A[0]] = 1;

    for (const point &task : query) {
        while (left < task.left) {
            hash[A[left]]--;
            answer -= (hash[A[left]] == 0);
            left++;
        }
        while (left > task.left) {
            left--;
            hash[A[left]]++;
            answer += (hash[A[left]] == 1);
        }
        while (right < task.right) {
            right++;
            hash[A[right]]++;
            answer += (hash[A[right]] == 1);
        }
        while (right > task.right) {
            hash[A[right]]--;
            answer -= (hash[A[right]] == 0);
            right--;
        }
        solution[task.id] = answer;
    }

    for (int answer : solution)
        printf("%d\n", answer);

    return 0;
}