#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    vector<int> *A;
    public:
        Graph(int V) {
            this->V = V;
            this->A = new vector<int>[V];
        }
        
        void addEdgeDirected(int u, int v){ // from -> to
            A[u].push_back(v);
        }

        void addEdgeUnDirected(int u, int v){
            A[u].push_back(v);
            A[v].push_back(u);
        }
        bool cycleCheck(int , vector<bool> &, vector<bool> &);
        bool isCycle();
};

bool Graph::cycleCheck(int v, vector<bool> &vis, vector<bool> &rec_stack){
    if(!vis[v]){
        vis[v] = rec_stack[v] = true;
        for(auto i:A[v]){
            if(!vis[i] and cycleCheck(i, vis, rec_stack)){
                return true;
            }
            else if(rec_stack[i]){
                return true;
            }
        }
    }
    return rec_stack[v] = false;
}


bool Graph::isCycle(){
    bool flag = false;
    vector<bool> vis(V, false), rec(V, false);
    for(int i=0;i<V;i++){
        if(cycleCheck(i,vis, rec)){
            flag = true;
        }
    }
    return flag;
}


int main(){
    int V = 4;
    Graph g(V);
    g.addEdgeDirected(0, 1);
    g.addEdgeDirected(0, 2);
    g.addEdgeDirected(1, 2);
    g.addEdgeDirected(2, 0);
    g.addEdgeDirected(2, 3);
    g.addEdgeDirected(3, 3);
    if(g.isCycle()){
        cout << "CYCLE";
    }
    else{
        cout << "NO-CYCLE";
    }
    return 0;
}