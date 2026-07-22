class Solution {
  private:
    void dfsHelper(int node, vector<vector<int>>& adj, vector<bool>& vis, vector<int>& ans) {
        vis[node] = true;
        ans.push_back(node);
        
        
        for (int neighbor : adj[node]) {
            if (!vis[neighbor]) {
                dfsHelper(neighbor, adj, vis, ans);
            }
        }
    }

  public:

    vector<int> dfs(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<bool> vis(V, false);
        vector<int> ans;
        
        
        dfsHelper(0, adj, vis, ans);
        
        return ans;
    }
};