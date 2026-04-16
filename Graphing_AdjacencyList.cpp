#include <iostream> 
#include <vector> using 
namespace std; 
class Graph { int 
vertices; 
vector<int>* adjList; 
public: 
Graph(int v) { 
vertices = v; 
adjList = new vector<int>[vertices]; 
} 
void addEdge(int src, int dest) { adjList[src].push_back(dest); 
adjList[dest].push_back(src); 
} 
void displayGraph() { 
// For undirected graph 
for (int i = 0; i < vertices; i++) { cout << 
"Vertex " << i << ": "; 
for (int j = 0; j < adjList[i].size(); j++) { cout << 
adjList[i][j] << " -> "; 
} 
cout << "NULL" << endl; 
} 
} 
}; 
int main() {  
int v, e, src, dest; 
cout << "Enter number of vertices: "; cin >> 
v; 
Graph g(v); 
cout << "Enter number of edges: "; cin 
>> e; 
for (int i = 0; i < e; i++) { 
cout << "Enter edge (source destination): "; cin >> 
src >> dest; 
g.addEdge(src, dest); 
} 
cout << "\nAdjacency List Representation:\n"; g.displayGraph(); 
return 0; 
} 