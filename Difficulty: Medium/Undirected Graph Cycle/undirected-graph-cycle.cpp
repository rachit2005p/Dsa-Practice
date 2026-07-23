#include <vector>
#include <queue>

class Solution {
private:
    // Helper function to perform BFS and detect a cycle starting from a source node
    bool detectCycleBFS(int startNode, const std::vector<std::vector<int>>& adj, std::vector<bool>& visited) {
        // Queue stores pairs of {current_node, parent_node}
        std::queue<std::pair<int, int>> q;
        
        visited[startNode] = true;
        q.push({startNode, -1});
        
        while (!q.empty()) {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            
            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push({neighbor, node});
                } 
                // If an adjacent vertex is visited and not parent of current vertex, then there is a cycle
                else if (parent != neighbor) {
                    return true;
                }
            }
        }
        
        return false;
    }

public:
    bool isCycle(int V, std::vector<std::vector<int>>& edges) {
        // Step 1: Build the adjacency list from the given edge list
        std::vector<std::vector<int>> adj(V);
        for (const auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        // Step 2: Track visited nodes
        std::vector<bool> visited(V, false);
        
        // Step 3: Handle disconnected graphs by checking all components
        for (int i = 0; i < V; ++i) {
            if (!visited[i]) {
                if (detectCycleBFS(i, adj, visited)) {
                    return true;
                }
            }
        }
        
        return false;
    }
};