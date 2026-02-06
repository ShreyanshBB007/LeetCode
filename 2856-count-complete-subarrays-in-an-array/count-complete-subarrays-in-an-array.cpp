class Solution {
public:
    unordered_map<int, int> mpp;
    int atMost(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        int scount = 0;
        int ans = 0;
        mpp.clear();
        while (right < nums.size()) {
            mpp[nums[right]]++;
            if (mpp[nums[right]] == 1) {
                scount++;
            }
            while (scount > k) {
                mpp[nums[left]]--;
                if (mpp[nums[left]] == 0) {
                    scount--;
                }
                left++;
            }
            ans+=(right-left+1);
            right++;
        }
        return ans;
    }
    int countCompleteSubarrays(vector<int>& nums) {
        int k = 0;
        mpp.clear();
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
            if (mpp[nums[i]] == 1) {
                k++;
            }
        }
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};