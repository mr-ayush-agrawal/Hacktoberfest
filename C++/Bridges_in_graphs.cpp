// A C++ program to find bridges in a given undirected graph

#include<bits/stdc++.h>
using namespace std;
 
// A class that represents an undirected graph
class Graph
{
    int V;    // No. of vertices
    list<int> *adj;    // A dynamic array of adjacency lists
    void bridgeUtil(int u, vector<bool>& visited, vector<int>& disc,
                                  vector<int>& low, int parent);
public:
    Graph(int V);   // Constructor
    void addEdge(int v, int w);   // to add an edge to graph
    void bridge();    // prints all bridges
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);  // Note: the graph is undirected
}
 
// A recursive function that finds and prints bridges using
// DFS traversal
// u --> The vertex to be visited next
// visited[] --> keeps track of visited vertices
// disc[] --> Stores discovery times of visited vertices
// parent[] --> Stores parent vertices in DFS tree
void Graph::bridgeUtil(int u, vector<bool>& visited, vector<int>& disc,
                                  vector<int>& low, int parent)
{
    // A static variable is used for simplicity, we can
    // avoid use of static variable by passing a pointer.
    static int time = 0;
 
    // Mark the current node as visited
    visited[u] = true;
 
    // Initialize discovery time and low value
    disc[u] = low[u] = ++time;
 
    // Go through all vertices adjacent to this
    list<int>::iterator i;
    for (i = adj[u].begin(); i != adj[u].end(); ++i)
    {
        int v = *i;  // v is current adjacent of u
           
          // 1. If v is parent
          if(v==parent)
            continue;
       
          //2. If v is visited
          if(visited[v]){
          low[u]  = min(low[u], disc[v]);
        }
       
          //3. If v is not visited
          else{
          parent = u;
          bridgeUtil(v, visited, disc, low, parent);
   
          // update the low of u as it's quite possible
          // a connection exists from v's descendants to u
          low[u]  = min(low[u], low[v]);
           
          // if the lowest possible time to reach vertex v
          // is greater than discovery time of u it means
          // that v can be only be reached by vertex above v
          // so if that edge is removed v can't be reached so it's a bridge
          if (low[v] > disc[u])
              cout << u <<" " << v << endl;
           
        }
    }
}
 
// DFS based function to find all bridges. It uses recursive
// function bridgeUtil()
void Graph::bridge()
{
    // Mark all the vertices as not visited disc and low as -1
    vector<bool> visited (V,false);
    vector<int> disc (V,-1);
      vector<int> low (V,-1);
     
      // Initially there is no parent so let it be -1
      int parent = -1;
 
    // Call the recursive helper function to find Bridges
    // in DFS tree rooted with vertex 'i'
    for (int i = 0; i < V; i++)
        if (visited[i] == false)
            bridgeUtil(i, visited, disc, low, parent);
}