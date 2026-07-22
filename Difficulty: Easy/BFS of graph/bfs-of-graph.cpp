class Solution {
  public:
    
    vector<int> bfs(vector<vector<int>> &adj) {
        int V = adj.size();
        vector<int> bfs_result;
        vector<bool> visited(V, false);
        queue<int> q;

       
        q.push(0);
        visited[0] = true;

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            bfs_result.push_back(node);

           
            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }

        return bfs_result;
    }
};