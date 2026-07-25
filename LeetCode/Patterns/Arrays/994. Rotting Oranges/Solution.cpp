#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        
        queue<pair<int, int>> q;
        int freshCount = 0;
        
        // 1. Collect all initial rotten oranges and count fresh ones
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (grid[r][c] == 2) {
                    q.push({r, c});
                } else if (grid[r][c] == 1) {
                    freshCount++;
                }
            }
        }
        
        // If there are no fresh oranges, 0 minutes needed
        if (freshCount == 0) return 0;
        
        int minutes = 0;
        int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        
        // 2. Perform Multi-Source BFS
        while (!q.empty() && freshCount > 0) {
            int size = q.size();
            minutes++;
            
            for (int i = 0; i < size; ++i) {
                auto [r, c] = q.front();
                q.pop();
                
                for (auto& dir : directions) {
                    int nr = r + dir[0];
                    int nc = c + dir[1];
                    
                    // Check bounds and if neighbor is a fresh orange
                    if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && grid[nr][nc] == 1) {
                        grid[nr][nc] = 2; // Mark as rotten
                        freshCount--;      // Decrement fresh count
                        q.push({nr, nc});
                    }
                }
            }
        }
        
        // 3. Return result based on remaining fresh oranges
        return freshCount == 0 ? minutes : -1;
    }
};