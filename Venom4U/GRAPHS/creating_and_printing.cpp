vector<vector<int>> printAdjacency(int n, int m, vector<vector<int>>& edges) {
    // Declare an array of vectors to store adjacency lists for each node
    // `ans` is an array of size n, where each index corresponds to a node
    // and the vector at each index will store the adjacent nodes.
    vector<int> ans[n];

    // Iterate over all the edges
    // Each edge is a pair of two nodes u and v.
    // We assume the graph is undirected, so we add v to u's adjacency list
    // and add u to v's adjacency list.
    for (int i = 0; i < m; i++) {
        int u = edges[i][0];  // Node u
        int v = edges[i][1];  // Node v

        // Since it's an undirected graph, add v to u's adjacency list
        // and add u to v's adjacency list.
        ans[u].push_back(v);
        ans[v].push_back(u);
    }

    // Declare a 2D vector `adj` to store the final adjacency list with self node reference.
    vector<vector<int>> adj(n);

    // Now, populate the `adj` array which stores the node followed by its adjacent nodes.
    // For each node i, we add i itself first (as per the problem statement),
    // then add all the nodes from its adjacency list `ans[i]`.
    for (int i = 0; i < n; i++) {
        adj[i].push_back(i);  // First add the node itself
        for (int j = 0; j < ans[i].size(); j++) {
            adj[i].push_back(ans[i][j]);  // Add all adjacent nodes to node i
        }
    }

    // Return the 2D vector `adj`, which contains the adjacency list for each node.
    return adj;
}
