class Solution {
public:
    int m, n;

    bool dfs(vector<vector<int>>& grid, int r, int c){
        // Out of bounds means this island touches the boundary
        if (r < 0||c < 0||r>= m||c >= n)
            return false;

        // Water or already visited land
        if (grid[r][c] == 1)
            return true;

        // Mark land as visited
        grid[r][c] = 1;

        bool down  = dfs(grid, r + 1, c);
        bool up    = dfs(grid, r - 1, c);
        bool right = dfs(grid, r, c + 1);
        bool left  = dfs(grid, r, c - 1);

        // Island is closed only if every direction stays enclosed
        return down && up && right && left;
    }

    int closedIsland(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();

        int count = 0;

        for (int r = 0; r < m; r++){
            for (int c = 0; c < n; c++){
                if (grid[r][c] == 0){
                    if (dfs(grid, r, c)){
                        count++;
                    }
                }
            }
        }

        return count;
    }
};
