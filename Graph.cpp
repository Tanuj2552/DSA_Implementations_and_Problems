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

    void print(int v = 0){
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

    void bfs(int v = 0){
        bool check[size]={0};
        queue<int> q;

        for(int i=v;i<size;i++){
            if(graph[i].size() == 0){continue;}
                q.push(i);                
                check[i] = true;
                break;
        }
        
        if(v == 0)
            cout << "Starting the BFS of the Graph from the node with minimum value..!" << endl;
        else
            cout << "Starting the BFS of the Graph from the node with value of " << v << endl;
        cout << q.front() << " --> ";
        check[q.front()] = true;

        while(!q.empty()){
            int top = q.front();
            if(!check[top]){
                cout << top << " --> ";
            }
            q.pop();
            for(auto x:graph[top]){
                if(!check[x]){
                    cout << x << " --> ";
                    q.push(x);
                    check[x] = 1;
                }
            }
        }
        cout << endl;
    }

    void dfs(int v = 0){
        bool check[size]={0};
        stack<int> s;

        for(int i=v;i<size;i++){
            if(graph[i].size() == 0){continue;}
                s.push(i);                
                check[i] = true;
                break;
        }
        if(v == 0)
            cout << "Starting the DFS of the Graph from the node with minimum value..!" << endl;
        else
            cout << "Starting the DFS of the Graph from the node with value of " << v << endl;
        cout << s.top() << " --> ";
        check[s.top()] = true;

        while(!s.empty()){
            int top = s.top();
            if(!check[top]){
                cout << top << " --> ";
                check[top] = true;
            }
            s.pop();

            for(auto x:graph[top]){
                if(!check[x]){
                    s.push(x);
                    //check[x] = true;
                }
            }
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
    cout << "Enter from which node, you want to start the bfs traversal" << endl;
    int bf; cin >> bf;
    graph.bfs(bf);
    cout << "Enter from which node, you want to start the dfs traversal" << endl;
    int df; cin >> df;
    graph.dfs(df);
}