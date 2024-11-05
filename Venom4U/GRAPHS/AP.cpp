#include <iostream>
#include <unordered_map>
#include <vector>
#include <list>
#include <algorithm> // for std::min

using namespace std;

void dfs(int node, int parent, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited, vector<int> &discoveryTime, vector<int> &lowestTime, vector<int> &AP, int &timer){
    visited[node] = true;
    discoveryTime[node] = lowestTime[node] = timer++;
    int children = 0;
    for(auto i: adj[node]){
        if(i == parent){
            continue;
        }
        if(!visited[i]){
            children++;
            dfs(i, node, adj, visited, discoveryTime, lowestTime, AP, timer);
            lowestTime[node] = min(lowestTime[node], lowestTime[i]);
            if(lowestTime[i] >= discoveryTime[node] && parent != -1){
                AP[node] = 1;
            }
        }else{
            lowestTime[node] = min(lowestTime[node], discoveryTime[i]);
        }
    }
    if(parent == -1 && children > 1){
        AP[node] = 1;
    }
}

int main(){

    int n = 5;
    int e = 5;

    vector<pair<int,int>> edges;
    edges.push_back({0,3});
    edges.push_back({0,1});
    edges.push_back({3,4});
    edges.push_back({1,2});
    edges.push_back({0,4});
    //adjacency list
    unordered_map<int, list<int>> adj;
    for(int i=0;i<edges.size();i++){
        int u = edges[i].first;
        int v = edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int timer = 0;
    vector<int> discoveryTime(n, -1);
    vector<int> lowestTime(n, -1);
    unordered_map<int, bool> visited;
    vector<int> AP(n,0);

    //dfs
    for(int i=0;i<n;i++){
        if(!visited[i]){
            dfs(i, -1, adj, visited, discoveryTime, lowestTime, AP, timer);
        }
    }

    //print articulation points
    cout<<"Articulation Points: ";
    for(int i=0;i<n;i++){
        if(AP[i]){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}
