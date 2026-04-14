class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int ans = 0;
        for(int row = 0; row < rows; row++){
            for(int col = 0; col < cols; col++){
                if(mat[row][col]==1){
                    int colsum = 0;
                    int rowsum = 0;
                    for(int i = 0; i < rows; i++){
                        rowsum+=mat[i][col];
                    }
                    for(int i = 0; i < cols; i++){
                        colsum+=mat[row][i];
                    }
                    if(rowsum==1&&colsum==1){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};