class Solution {
public:
    void DFS(vector<vector<char>>& grid, int i, int j, int n, int m) {
        if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == '0')
            return;

        grid[i][j] = '0';

        DFS(grid, i - 1, j, n, m);
        DFS(grid, i + 1, j, n, m); 
        DFS(grid, i, j - 1, n, m); 
        DFS(grid, i, j + 1, n, m); 
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        if (n == 0) return 0; 
        int m = grid[0].size();
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == '1') {
                    ans++;  
                    DFS(grid, i, j, n, m); 
                }
            }
        }
        return ans;
    }
};

