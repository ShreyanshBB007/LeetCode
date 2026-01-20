class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x,
                                         int y, int k) {
        for (int i = 0; i < k / 2; i++) {
            int a = x + i;
            int b = x + k - 1 - i;
            for (int j = y; j <= y + k - 1; j++) {
                swap(grid[a][j], grid[b][j]);
                ;
            }
        }
        return grid;
    }
};