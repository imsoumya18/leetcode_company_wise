class Solution
{
    public:
        void rotate(vector<vector < int>> &matrix)
        {
            int i, j;
            int n = matrix.size();

            for (i = n - 1; i >= 0; i--)
                for (j = 0; j <= i; j++)
                    swap(matrix[i][j], matrix[j][i]);

            for (i = 0; i <= (n - 1) / 2; i++)
                for (j = 0; j < n; j++)
                    swap(matrix[j][i], matrix[j][n - i - 1]);
        }
};
