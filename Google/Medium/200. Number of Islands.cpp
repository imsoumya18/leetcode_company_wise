class Solution
{
    public:
        void marklands(vector<vector < char>> &grid, int i, int j)
        {
            int l = grid[0].size(), b = grid.size();

            if (i < 0 || i >= b || j < 0 || j >= l)
                return;
            else if (grid[i][j] != '1')
                return;

            grid[i][j] = '2';
            marklands(grid, i - 1, j);
            marklands(grid, i, j - 1);
            marklands(grid, i + 1, j);
            marklands(grid, i, j + 1);
        }

    int numIslands(vector<vector < char>> &grid)
    {
        int islands = 0;

        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid[0].size(); j++)
                if (grid[i][j] == '1')
                {
                    islands++;
                    marklands(grid, i, j);
                }

        return islands;
    }
};
