#include <iostream>
#include <vector>
#include <cstring> // Used for memset
using namespace std;

const int MAX_NODES = 1001;

vector<int> adjacencyList[MAX_NODES];
int visited[MAX_NODES];

// Perform Depth First Search on the graph starting from the given node
void DepthFirstSearch(const vector<int> graph[], int node) {
    visited[node] = 1; // Mark the current node as visited
    for (int neighbor : graph[node]) { // Iterate through all connected nodes (neighbors)
        if (!visited[neighbor]) { // If the neighbor has not been visited
            DepthFirstSearch(graph, neighbor); // Recursively visit the neighbor
        }
    }
}

// Check if the number of connected components increases when a node is removed
bool check(const vector<int> graph[], int totalNodes, int originalComponents) {
    int connectedComponents = 0;
    for (int i = 1; i <= totalNodes; i++) {
        if (!visited[i]) { // If the node hasn't been visited yet
            DepthFirstSearch(graph, i); // Perform DFS from this node
            connectedComponents++; // Increment the count of connected components
        }
    }
    return connectedComponents > originalComponents; // Return true if components increased
}

int main() {
    int totalNodes, totalEdges;
    cin >> totalNodes >> totalEdges;

    // Build the adjacency list from the input edges
    while (totalEdges--) {
        int node1, node2;
        cin >> node1 >> node2;
        adjacencyList[node1].push_back(node2);
        adjacencyList[node2].push_back(node1);
    }

    // Count the initial number of connected components
    int originalComponents = 0;
    for (int i = 1; i <= totalNodes; i++) {
        if (visited[i] == 0) { // If the node hasn't been visited
            DepthFirstSearch(adjacencyList, i); // Perform DFS
            originalComponents++; // Increment the component count
        }
    }

    // Count the number of articulation points (nodes that, if removed, increase the component count)
    int cntDinhTru = 0;
    for (int i = 1; i <= totalNodes; i++) {
        memset(visited, 0, sizeof(visited)); // Reset the visited array
        visited[i] = 1; // Simulate the removal of the current node
        if (check(adjacencyList, totalNodes, originalComponents)) {
            cntDinhTru++; // If the number of components increases, this node is an articulation point
        }
    }

    // Output the number of articulation points
    cout << cntDinhTru << endl;
    return 0;
}
