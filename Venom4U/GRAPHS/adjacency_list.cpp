#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

/*
--> addAdj Function:

Time Complexity: O(1) on average for adding an edge. This is because unordered_map provides constant-time average insertion.

Space Complexity: O(V + E), where V is the number of vertices and E is the number of edges. Each vertex is stored as a key in the unordered_map, and each key points to a list that stores all its adjacent vertices.

--> displayAdjList Function:

Time Complexity: O(V + E), where V is the number of vertices and E is the number of edges. We iterate through all vertices, and for each vertex, we iterate through its adjacency list once.

Space Complexity: O(V + E), since we are storing the adjacency list in an unordered_map and printing it without additional space usage.
*/

class Graph {
    public:

    // Adjacency list representation using unordered_map.
    // Key (int) represents a vertex, and value (list<int>) stores its adjacent vertices.
    unordered_map<int, list<int> > adj;

    // Function to add an edge to the graph.
    // u = starting vertex, v = ending vertex, direction = type of graph (0 for undirected, 1 for directed).
    void addAdj(int u, int v, bool direction) {
        // Add edge from u to v.
        adj[u].push_back(v);

        // If the graph is undirected (direction == 0), add an edge from v to u as well.
        if (direction == 0) {
            adj[v].push_back(u);
        }
    }

    // Function to display the adjacency list of the graph.
    void diplayAdjList() {
        // Iterate through each vertex in the adjacency list.
        for (auto i : adj) {
            // Print the current vertex (i.first) followed by " --> ".
            cout << i.first << " --> ";
            // Iterate through the adjacency list of the current vertex and print each adjacent vertex.
            for (auto j : i.second) {
                cout << j << ", ";
            }
            cout << endl; // Newline after printing all adjacent vertices of the current vertex.
        }
    }
};

int main() {
    // Number of nodes (vertices) in the graph.
    int n;
    cout << "Enter the number of nodes : ";
    cin >> n;

    // Number of edges in the graph.
    int m;
    cout << "Enter the number of edges : ";
    cin >> m;

    // Create a graph object.
    Graph g;

    // Input all edges from the user.
    for (int i = 0; i < m; i++) {
        int u, v;
        cout << "Enter the edge : ";
        cin >> u >> v;

        // Add the edge to the graph as an undirected edge (direction = 0).
        g.addAdj(u, v, 0);
    }

    // Display the adjacency list of the graph.
    g.diplayAdjList();

    return 0;
}
