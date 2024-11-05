// #include<iostream>
// #include<list>
// #include<unordered_map>
// #include<vector>

// using namespace std;

// class Graph{
//     public:
//     unordered_map<int, list<int>> adjList;
    
//     void addEdge(int u, int v, bool dir){
//         adjList[u].push_back(v);
//         if(dir == 0){
//             adjList[v].push_back(u);
//         }
//     }

//     void printAdjList(){
//         for(auto i: adjList){
//             cout << i.first << " -> ";
//             for(int entry: i.second){
//                 cout << entry << ", ";
//             }
//             cout << endl;
//         }
//     }

//     void dfs(int src, vector<bool> &visited, vector<int> &component){
//         visited[src] = true;
//         component.push_back(src);

//         for(int neighbour: adjList[src]){
//             if(!visited[neighbour]){
//                 dfs(neighbour, visited, component);
//             }
//         }
//     }
// };

// int main(){
//     cout << "Enter number of nodes: ";
//     int n;
//     cin >> n;  // Input total nodes (should be 7 in your case)
//     cout << "Enter number of edges: ";
//     int e;
//     cin >> e;  // Input total edges (6 in your case)

//     Graph g;

//     for(int i = 0; i < e; i++){
//         cout << "Enter the edge: ";
//         int u, v;
//         cin >> u >> v;

//         g.addEdge(u, v, 0);  // undirected graph
//     }

//     g.printAdjList();

//     vector<vector<int>> components;
//     vector<bool> visited(n, false);

//     // Iterate through all nodes and perform DFS on unvisited nodes
//     for(int i = 0; i < n; i++){
//         if(!visited[i]){
//             vector<int> component;
//             g.dfs(i, visited, component);
//             components.push_back(component);
//         }
//     }

//     // Print DFS components
//     cout << "DFS Components: " << endl;
//     for(auto component : components){
//         for(int node : component){
//             cout << node << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


#include<iostream>
#include<list>
#include<unordered_map>
#include<vector>

using namespace std;

class Graph{
    public:
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool dir){
        adjList[u].push_back(v);
        if(dir == 0){
            adjList[v].push_back(u);
        }
    }

    void printAdjList(){
        for(auto i: adjList){
            cout << i.first << " -> ";
            for(int entry: i.second){
                cout << entry << ", ";
            }
            cout << endl;
        }
    }

    void dfs(int src, vector<bool> &visited, vector<int> &component){
        visited[src] = true;
        component.push_back(src);

        for(int neighbour: adjList[src]){
            if(!visited[neighbour]){
                dfs(neighbour, visited, component);
            }
        }
    }
};

int main(){
    cout << "Enter number of nodes: ";
    int n;
    cin >> n;  // Input total nodes
    cout << "Enter number of edges: ";
    int e;
    cin >> e;  // Input total edges

    Graph g;

    for(int i = 0; i < e; i++){
        cout << "Enter the edge: ";
        int u, v;
        cin >> u >> v;

        g.addEdge(u, v, 0);  // undirected graph
    }

    g.printAdjList();

    vector<vector<int>> components;
    vector<bool> visited(n, false);

    // Iterate through all nodes and perform DFS on unvisited nodes
    for(int i = 0; i < n; i++){
        if(!visited[i] && g.adjList.find(i) != g.adjList.end()){  // Check if the node has any edges
            vector<int> component;
            g.dfs(i, visited, component);
            components.push_back(component);
        }
    }

    // Print DFS components
    cout << "DFS Components: " << endl;
    for(auto component : components){
        for(int node : component){
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}
