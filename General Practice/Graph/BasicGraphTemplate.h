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
};