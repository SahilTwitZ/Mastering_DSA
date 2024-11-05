#include<iostream>
#include<list>
#include<vector>
#include<unordered_map>

using namespace std;


class Graph{
public:
    unordered_map<int,list<int>> adjList;
    void addEdge(int u, int v, bool direction){
        adjList[u].push_back(v);
        if(direction == 0){
            adjList[v].push_back(u);
        }
    }

    void printAdj(){
        for(auto i:adjList){
            cout<<i.first<<"->";
            for(auto x:i.second){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int numOfnodes;
    int numOfedges;
    cout<<"Enter the number of nodes and edges: ";
    cin>>numOfnodes>>numOfedges;

    Graph g;
    for(int i=0;i<numOfedges;i++){
        int u,v;
        cout<<"Enter the edge: ";
        cin>>u>>v;
        // g.addEdge(u,v,0);
        g.addEdge(u,v,1);
    }

    //print the adjacency list
    g.printAdj();
}