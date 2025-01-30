#include <bits/stdc++.h>
using namespace std;

vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
    // Create adjacency list
    vector<vector<pair<int, int>>> graph(n + 1); // {neighbor, weight}
    for (const auto& edge : edges) {
        int a = edge[0], b = edge[1], w = edge[2];
        graph[a].push_back({b, w});
        graph[b].push_back({a, w});
    }

    // Min-heap priority queue: {distance, node}
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(n + 1, INT_MAX); // Distance from source
    vector<int> parent(n + 1, -1);   // To reconstruct the path

    dist[1] = 0;
    pq.push({0, 1});

    while (!pq.empty()) {
        pair<int, int> top = pq.top(); // Replace structured binding
        pq.pop();

        int current_dist = top.first;  // Explicit unpacking
        int current_node = top.second;

        if (current_dist > dist[current_node])
            continue;

        for (const auto& neighbor : graph[current_node]) {
            int next_node = neighbor.first;
            int weight = neighbor.second;

            if (dist[current_node] + weight < dist[next_node]) {
                dist[next_node] = dist[current_node] + weight;
                parent[next_node] = current_node;
                pq.push({dist[next_node], next_node});
            }
        }
    }

    // Check if there's a path to node n
    if (dist[n] == INT_MAX)
        return {-1};

    // Reconstruct the path
    vector<int> path;
    for (int at = n; at != -1; at = parent[at])
        path.push_back(at);

    reverse(path.begin(), path.end());
    path.insert(path.begin(), dist[n]); // Add the total weight to the start

    return path;
}

// Example usage
int main() {
    int n = 5, m = 6;
    vector<vector<int>> edges = {
        {1, 2, 2},
        {1, 3, 4},
        {2, 3, 1},
        {2, 4, 7},
        {3, 5, 3},
        {4, 5, 1}
    };

    vector<int> result = shortestPath(n, m, edges);
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
