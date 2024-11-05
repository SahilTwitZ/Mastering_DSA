#include <iostream>
#include <unordered_map>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

// Depth First Search function to find articulation points
void dfs(int node, int parent, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited, vector<int> &discoveryTime, vector<int> &lowestTime, vector<int> &AP, int &timer){
    visited[node] = true; // Mark the current node as visited
    discoveryTime[node] = lowestTime[node] = timer++; // Initialize discovery and lowest time
    int children = 0; // Count of children in DFS tree

    // Traverse all adjacent vertices
    for(auto i: adj[node]){
        if(i == parent){
            continue; // If the adjacent node is the parent, skip it
        }
        if(!visited[i]){
            children++; // Increment child count
            dfs(i, node, adj, visited, discoveryTime, lowestTime, AP, timer); // Recursive DFS call
            lowestTime[node] = min(lowestTime[node], lowestTime[i]); // Update the lowest time

            // Check if the subtree rooted at i has a connection back to one of the ancestors of node
            if(lowestTime[i] >= discoveryTime[node] && parent != -1){
                AP[node] = 1; // Mark node as an articulation point
            }
        }else{
            lowestTime[node] = min(lowestTime[node], discoveryTime[i]); // Update the lowest time for back edge
        }
    }

    // If node is root and has more than one child, it is an articulation point
    if(parent == -1 && children > 1){
        AP[node] = 1;
    }
}

int main(){
    int n = 5; // Number of nodes
    int e = 5; // Number of edges

    vector<pair<int,int>> edges; // List of edges
    edges.push_back({0,3});
    edges.push_back({0,1});
    edges.push_back({3,4});
    edges.push_back({1,2});
    edges.push_back({0,4});

    // Create adjacency list
    unordered_map<int, list<int>> adj;
    for(int i=0; i<edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int timer = 0; // Timer for discovery time
    vector<int> discoveryTime(n, -1); // Discovery times of visited vertices
    vector<int> lowestTime(n, -1); // Lowest discovery times reachable
    unordered_map<int, bool> visited; // Visited nodes
    vector<int> AP(n, 0); // Articulation points

    // Perform DFS for each node
    for(int i=0; i<n; i++){
        if(!visited[i]){
            dfs(i, -1, adj, visited, discoveryTime, lowestTime, AP, timer);
        }
    }

    // Print articulation points
    cout << "Articulation Points: ";
    for(int i=0; i<n; i++){
        if(AP[i]){
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
