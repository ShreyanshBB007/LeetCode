class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int left = 0;
        int right = 0;
        int sum = 0;
        int ans = 0;
        while (right < nums.size()) {
            if (mpp.find(nums[right]) != NULL) {
                while (left < mpp[nums[right]] + 1) {
                    sum -= nums[left];
                    left++;
                }
            }
            sum += nums[right];
            mpp[nums[right]] = right;
            right++;
            ans = max(ans, sum);
        }
        return ans;
    }
};