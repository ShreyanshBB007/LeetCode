class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> rowmin(m, INT_MAX);
        vector<int> colmax(n, 0);
        vector<int> ans;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                rowmin[i] = min(rowmin[i], matrix[i][j]);
                colmax[j] = max(colmax[j], matrix[i][j]);
            }
        }

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(rowmin[i] == colmax[j]){
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
};