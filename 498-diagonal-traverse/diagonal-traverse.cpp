class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int veclen = m+n-1;
        vector<vector<int>> vec(veclen);
        vector<int> ans;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                vec[i+j].push_back(mat[i][j]);
            }
        }
        for(int i = 0; i < vec.size(); i++){
            if(i%2==0){
                reverse(vec[i].begin(), vec[i].end());
            }
        }
        for(auto& x : vec){
            for(auto& y : x){
                ans.push_back(y);
            }
        }
        return ans;

    }
};