#include <bits/stdc++.h>
using namespace std;

// Helper function to perform DFS and detect cycle in an undirected graph
bool isCyclicDFS(int node, int parent, unordered_map<int, int> &visited, unordered_map<int, list<int>> &adj) {
    visited[node] = 1; // Mark current node as visited
        
    // Traverse all neighbors of the current nodeKW
    for (auto neighbour : adj[node]) {
        // If the neighbor hasn't been visited, recursively perform DFS
        if (!visited[neighbour]) {
            bool ans = isCyclicDFS(neighbour, node, visited, adj);
            if (ans) { // If a cycle is found, return true
                return true;
            }
        }
        // If the neighbor is visited and is not the parent of the current node, it's a cycle
        else if (neighbour != parent) {
            return true;
        }
    }

    return false; // No cycle found
}

// Function to detect cycle in an undirected graph
string cycleDetection(vector<vector<int>>& edges, int n, int m) {
    unordered_map<int, list<int>> adj; // Adjacency list representation of the graph

    // Build the adjacency list from the edge list
    for (int i = 0; i < m; i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v); // Add edge u to v
        adj[v].push_back(u); // Add edge v to u (since the graph is undirected)
    }

    unordered_map<int, int> visited; // To track visited nodes

    // Traverse all nodes to ensure we cover disconnected components
    for (int i = 0; i < n; i++) {
        // If the node hasn't been visited, perform DFS
        if (!visited[i]) {
            bool ans = isCyclicDFS(i, -1, visited, adj); // Start DFS from node 'i'

            if (ans) { // If a cycle is detected, return "Yes"
                return "Yes";
            }
        }
    }

    return "No"; // No cycle detected in the graph
}

int main() {
    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    vector<vector<int>> edges(m, vector<int>(2)); // List of edges
    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < m; i++) {
        cin >> edges[i][0] >> edges[i][1]; // Input edge endpoints
    }

    // Call the cycle detection function and output the result
    string result = cycleDetection(edges, n, m);
    cout << "Cycle present? " << result << endl;

    return 0;
}
