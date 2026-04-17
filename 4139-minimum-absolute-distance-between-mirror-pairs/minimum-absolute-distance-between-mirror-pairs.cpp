class Solution {
public:
    int getreverse(int x){
        int rev = 0;
        while (x > 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int n = nums.size(), ans = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (mpp.count(nums[i])) {
                ans = min(ans, i - mpp[nums[i]]);
            }
            mpp[getreverse(nums[i])] = i;
        }
        return ans == INT_MAX ? -1 : ans;
    }
};