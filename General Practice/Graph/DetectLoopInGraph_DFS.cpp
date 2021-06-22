#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    vector<int> *A;
    enum {WHITE, GRAY, BLACK}; 
    // White : Not Visited and Not processed;
    // Gray : Processing started
    // Black : All descendants Processed.    
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
        bool cycleCheck_DFS(int , vector<bool> &, vector<bool> &);
        bool isCycle_Simple_DFS();
        bool cycleCheck_DFS_Color(int, vector<int> &);
        bool isCycle_DFS_Colors();
};

bool Graph::cycleCheck_DFS(int v, vector<bool> &vis, vector<bool> &rec_stack){
    if(!vis[v]){
        vis[v] = rec_stack[v] = true;
        for(auto i:A[v]){
            if(!vis[i] and cycleCheck_DFS(i, vis, rec_stack)){
                return true;
            }
            else if(rec_stack[i]){
                return true;
            }
        }
    }
    return rec_stack[v] = false;
}

bool Graph::isCycle_Simple_DFS(){
    bool flag = false;
    vector<bool> vis(V, false), rec(V, false);
    for(int i=0;i<V;i++){
        if(cycleCheck_DFS(i,vis, rec)){
            flag = true;
        }
    }
    return flag;
}

bool Graph::cycleCheck_DFS_Color(int v, vector<int> &colors){
    colors[v] = GRAY;
    for(auto i:A[v]){
        if (colors[i] == GRAY)
            return true;

        if(colors[i] == WHITE and cycleCheck_DFS_Color(i,colors))
            return true;
    }
    colors[v] = BLACK;
    return false;
}

bool Graph::isCycle_DFS_Colors(){
    bool flag = false;
    vector<int> colors(V, WHITE);
    for(int i=0;i<V;i++){
        if(colors[i] == WHITE && cycleCheck_DFS_Color(i,colors)){
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
    if(g.isCycle_DFS_Colors()){
        cout << "CYCLE";
    }
    else{
        cout << "NO-CYCLE";
    }
    return 0;
}