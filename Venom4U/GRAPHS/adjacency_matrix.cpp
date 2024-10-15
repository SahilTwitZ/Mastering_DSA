#include<iostream>

using namespace std;

// Declare a global adjacency matrix of size 20x20, initialized to 0.
// The matrix will store edges between vertices.
int arr[20][20] = {0}; // Initialize all values to 0.

// Function to display the adjacency matrix
// `n` is the number of vertices in the graph.
void displayMatrix(int n) {
   // Loop through each row (vertex i)
   for (int i = 0; i < n; i++) {
      // Loop through each column (vertex j)
      for (int j = 0; j < n; j++) {
         // Print the value at arr[i][j], which indicates whether
         // there is an edge between vertex i and vertex j.
         cout << arr[i][j] << " ";
      }
      // Move to the next line after printing all values in a row.
      cout << endl;
   }
}

// Function to add an edge between two vertices `u` and `v` in the graph.
// This function updates the adjacency matrix to represent the edge.
void add_edge(int u, int v) {
   // Set arr[u][v] to 1 to indicate an edge from vertex `u` to vertex `v`.
   arr[u][v] = 1;

   // Since the graph is undirected, also set arr[v][u] to 1 to represent
   // the edge in both directions.
   arr[v][u] = 1;
}

int main() {
   // Define the number of vertices in the graph (6 vertices in this case).
   int n = 6;

   // Add edges between the vertices using the add_edge function.
   // Example: add_edge(0, 4) adds an edge between vertex 0 and vertex 4.
   add_edge(0, 4);
   add_edge(0, 3);
   add_edge(1, 2);
   add_edge(1, 4);
   add_edge(1, 5);
   add_edge(2, 3);
   add_edge(2, 5);
   add_edge(5, 3);
   add_edge(5, 4);

   // Display the adjacency matrix after adding all edges.
   displayMatrix(n);

   return 0;
}