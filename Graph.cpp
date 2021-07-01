#include<bits/stdc++.h>
using namespace std;

class Graph
{

public:
    vector<vector<int>> graph;
    int size = 100;

    Graph(int n=100){
        cout << "Graph is initiated with a max size of 100" << endl;
        size = n;
        graph.resize(n);
    }

    void insert_edge(int a, int b){
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    void print(){
        for (int vertice = 0; vertice < size; vertice++){
            if(graph[vertice].size() == 0){ continue;}
            cout << "Vertice is " << vertice << endl;
            cout << "   Edges are --> ";
            for(auto edges:graph[vertice]){
                cout << edges << " ";
            }
            cout << endl;
        }
    }

    void dfs(){
        bool check[size];
        queue<int> q;

        for(int i=0;i<size;i++){
            if(graph[i].size() == 0){continue;}
                q.push(i);                
                check[i] = true;
                break;
        }
        
        cout << "Starting the DFS of the Graph from the node with minimum value..!" << endl;
        cout << q.front() << " --> ";
        check[q.front()] = true;

        while(!q.empty()){
            int top = q.front();
            if(!check[top]){
                cout << top << " --> ";
            }
            q.pop();
           // cout << "top is " << top << endl;
            for(auto x:graph[top]){
             //   cout << x << endl;
                if(!check[x]){
                    cout << x << " --> ";
                    q.push(x);
                    check[x] = 1;
                }
            }
        }
        cout << endl;
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
    graph.dfs();
}