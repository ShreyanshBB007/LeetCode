class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int idx = 0;
        for(int i = 0; i < queries.size(); i++){
            idx = queries[i][0];
            while(idx <= queries[i][1]){
                nums[idx] = (1LL * nums[idx] * queries[i][3]) % (1000000007);
                idx += queries[i][2];
            }
        }
        long long ans = 0;
        for(auto x : nums){
            ans = ans ^ x;
        }
        return ans;
    }
};