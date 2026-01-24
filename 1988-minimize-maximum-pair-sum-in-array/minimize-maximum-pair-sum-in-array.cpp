class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size()-1;
        int maxx = 0;
        for(int i = 0; i <= n; i++){
            maxx = max(maxx, nums[i]+nums[n]);
            n--;
        }
        return maxx;
    }
};