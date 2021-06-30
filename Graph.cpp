#include<bits/stdc++.h>
using namespace std;

class Graph
{

public:
    vector<vector<int>> graph;

    Graph(int n=100){
        cout << "Graph is initiated with a max size of 100" << endl;
        graph.resize(n);
    }

    void insert_edge(int a, int b){
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    void print(){
        for (int vertice = 0; vertice < graph.size(); vertice++){
            if(graph[vertice].size() == 0){continue;}
            cout << "Vertice is " << vertice << endl;
            cout << "   Edges are --> ";
            for(auto edges:graph[vertice]){
                cout << edges << " ";
            }
            cout << endl;
        }
    }
    
};

int main(){
    int n;
    cout << "Enter how many edges you want to make.." << endl;
    cin >> n;
    Graph graph;
    for(int i=0;i<n;i++){
        int a,b;
        cout << "Enter the values " << endl;
        cin >> a >> b;
        graph.insert_edge(a,b);
    }
    graph.print();
}