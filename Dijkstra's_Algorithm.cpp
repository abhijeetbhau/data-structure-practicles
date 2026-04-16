#include <iostream> 
#include <limits.h> 
using namespace std; 
 
#define V 5 
 
// Function to find the minimum distance node 
int minDistance(int dist[], bool visited[]) { 
    int min = INT_MAX, min_index; 
 
    for (int v = 0; v < V; v++) { 
        if (visited[v] == false && dist[v] <= min) { 
            min = dist[v]; 
            min_index = v; 
        } 
    } 
    return min_index; 
} 
 
// Dijkstra Algorithm 
void dijkstra(int graph[V][V], int src) { 
    int dist[V]; 
    bool visited[V]; 
 
    for (int i = 0; i < V; i++) { 
        dist[i] = INT_MAX; 
        visited[i] = false; 
    } 
 
    dist[src] = 0; 
 
    for (int count = 0; count < V - 1; count++) { 
        int u = minDistance(dist, visited); 
        visited[u] = true; 
 
        for (int v = 0; v < V; v++) { 
            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX 
                && dist[u] + graph[u][v] < dist[v]) { 
 
                dist[v] = dist[u] + graph[u][v]; 
            } 
        } 
    } 
 
 
 
 
 
 
 
 
    // Display result 
    cout << "City\tDistance from Source\n"; 
    for (int i = 0; i < V; i++) { 
        cout << i << "\t" << dist[i] << endl; 
    } 
} 
 
int main() { 
 
    // Graph representing cities and distances 
    int graph[V][V] = { 
        {0, 10, 0, 30, 100}, 
        {10, 0, 50, 0, 0}, 
        {0, 50, 0, 20, 10}, 
        {30, 0, 20, 0, 60}, 
        {100, 0, 10, 60, 0} 
    }; 
 
    int source = 0; // Starting city 
 
    dijkstra(graph, source); 
 
    return 0; 
} 