class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int count = 0;
        int ans = 0;
        unordered_map<int, int> mpp;
        while (right < nums.size()) {
            mpp[nums[right]]++;
            if (mpp[nums[right]] == 1) {
                count++;
            }
            if (count <= k) {
                ans += (right - left) + 1;
            } else {
                while (count > k) {
                    mpp[nums[left]]--;
                    if (mpp[nums[left]] == 0) {
                        count--;
                    }
                    left++;
                }
                if (count <= k) {
                    ans += (right - left) + 1;
                }
            }
            right++;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};