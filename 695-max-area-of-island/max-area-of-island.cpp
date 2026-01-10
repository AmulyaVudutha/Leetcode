class Solution {
public:
    int dfs(int i, int j, vector<vector<bool>> &vis, vector<vector<int>> &grid)
    {
        vis[i][j] = true;
        int area = 1;

        // 4 directions
        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};

        for (int k = 0; k < 4; k++)
        {
            int ni = i + dx[k];
            int nj = j + dy[k];

            if (ni >= 0 && ni < grid.size() &&
                nj >= 0 && nj < grid[0].size() &&
                grid[ni][nj] == 1 &&
                !vis[ni][nj])
            {
                area += dfs(ni, nj, vis, grid);
            }
        }
        return area;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> vis(n, vector<bool>(m, false));
        int maxArea = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1 && !vis[i][j])
                {
                    maxArea = max(maxArea, dfs(i, j, vis, grid));
                }
            }
        }
        return maxArea;
    }
};
