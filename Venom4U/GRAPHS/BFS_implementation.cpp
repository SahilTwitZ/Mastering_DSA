// #include<iostream>
// #include<list>
// #include<queue>
// #include<unordered_map>
// #include<vector>

// using namespace std;

// class Graph{
// public:
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

//     vector<bool> visited;  // Changed to vector<bool> for efficiency
//     vector<int> ans;

//     void BFS(int src){
//         queue<int> q;
//         visited[src] = true;
//         q.push(src);

//         while(!q.empty()){
//             int front = q.front();
//             q.pop();
//             ans.push_back(front);

//             // Travel all the neighbors of the node
//             for(int neighbour : adjList[front]){
//                 if(!visited[neighbour]){
//                     q.push(neighbour);
//                     visited[neighbour] = true;
//                 }
//             }
//         }
//     }
// };


// int main(){
//     int numNodes, numEdges;
//     cout << "Enter the number of nodes and edges: ";
//     cin >> numNodes >> numEdges;

//     Graph g;
//     cout << "Enter the edges: ";
//     for(int i = 0; i < numEdges; i++){
//         int u, v;
//         cin >> u >> v;

//         g.addEdge(u, v, 0);
//     }

//     // Initialize the visited vector with false values
//     g.visited.resize(numNodes, false);

//     // Print adjacency list
//     g.printAdjList();

//     // BFS for all components
//     for(int i = 0; i < numNodes; i++){
//         if(!g.visited[i]){
//             g.BFS(i);
//         }
//     }

//     cout << "BFS: ";
//     // Print the BFS result
//     for(int node : g.ans){
//         cout << node << " ";
//     }
// }


// #include<iostream>
// #include<list>
// #include<queue>
// #include<unordered_map>
// #include<vector>

// using namespace std;

// class Graph {
// public:
//     unordered_map<int, list<int>> adjList;
    
//     void addEdge(int u, int v, bool dir) {
//         adjList[u].push_back(v);
//         if (dir == 0) {
//             adjList[v].push_back(u);
//         }
//     }

//     void printAdjList() {
//         for (auto i : adjList) {
//             cout << i.first << " -> ";
//             for (int entry : i.second) {
//                 cout << entry << ", ";
//             }
//             cout << endl;
//         }
//     }

//     void BFS(int src, vector<bool>& visited, vector<int>& component) {
//         queue<int> q;
//         visited[src] = true;
//         q.push(src);

//         while (!q.empty()) {
//             int front = q.front();
//             q.pop();
//             component.push_back(front);

//             for (int neighbour : adjList[front]) {
//                 if (!visited[neighbour]) {
//                     q.push(neighbour);
//                     visited[neighbour] = true;
//                 }
//             }
//         }
//     }
// };

// int main() {
//     int numNodes, numEdges;
//     cout << "Enter the number of nodes and edges: ";
//     cin >> numNodes >> numEdges;

//     Graph g;
//     cout << "Enter the edges: ";
//     for (int i = 0; i < numEdges; i++) {
//         int u, v;
//         cin >> u >> v;
//         g.addEdge(u, v, 0);
//     }

//     g.printAdjList();

//     vector<bool> visited(numNodes, false);
    
//     // To store the components
//     vector<vector<int>> components;

//     for (int i = 0; i < numNodes; i++) {
//         if (!visited[i] && g.adjList.find(i) != g.adjList.end()) { // Check if node exists in the graph
//             vector<int> component;
//             g.BFS(i, visited, component);
//             components.push_back(component); // Store the component
//         }
//     }

//     // Print the components
//     for (int i = 0; i < components.size(); i++) {
//         cout << "Component " << (i + 1) << ": ";
//         for (int node : components[i]) {
//             cout << node << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
