#include <bits/stdc++.h>
using namespace std;

// Helper function to perform BFS and detect cycle in an undirected graph
bool isCyclicBFS(int src, unordered_map<int, int> &visited, unordered_map<int, list<int>> &adj) {
    unordered_map<int, int> parent; // To keep track of the parent node
    parent[src] = -1; // Initialize the source node's parent as -1 (no parent)
    visited[src] = 1; // Mark the source node as visited

    queue<int> q; // Queue for BFS
    q.push(src); // Push the source node into the queue

    // Perform BFS traversal
    while (!q.empty()) {
        int front = q.front(); // Get the front node in the queue
        q.pop(); // Remove it from the queue

        // Traverse all the neighbors of the current node
        for (auto neighbour : adj[front]) {
            // If the neighbor is visited and it's not the parent of the current node, there's a cycle
            if (visited[neighbour] == 1 && neighbour != parent[front]) {
                return true;
            }
            // If the neighbor hasn't been visited yet
            else if (!visited[neighbour]) {
                q.push(neighbour); // Push the neighbor into the queue
                visited[neighbour] = 1; // Mark it as visited
                parent[neighbour] = front; // Set the parent of the neighbor
            }
        }
    }
    return false; // No cycle found
}

// Function to detect cycle in an undirected graph using BFS
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
        // If the node hasn't been visited, perform BFS
        if (!visited[i]) {
            bool ans = isCyclicBFS(i, visited, adj); // Start BFS from node 'i'

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
