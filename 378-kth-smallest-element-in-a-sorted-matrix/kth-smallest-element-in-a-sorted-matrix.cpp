class Solution {
public:
    int getcount(vector<vector<int>>& matrix, int k){
        int count = 0;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j]<=k){
                    count++;
                }
            }        
        }
        return count;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int m = matrix.size();
        int n = matrix[0].size();
        int l  = matrix[0][0]; 
        int r = matrix[m-1][n-1];
        int ans =  0;

        while(l<=r){
            int mid = l + (r-l)/2;
            int count = getcount(matrix, mid);
            if(count >= k){
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        return ans;
    }
};