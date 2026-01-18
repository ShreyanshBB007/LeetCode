class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        if (k == 0) {
            int best = 0, cur = 0;
            for (int x : nums) {
                if (x == 1)
                    cur++;
                else
                    cur = 0;
                best = max(best, cur);
            }
            return best;
        }

        int left = 0;
        int right = 0;
        int ans = 0;
        int f = k;
        queue<int> q;
        while (right < nums.size()) {
            if (nums[right] == 1) {
                right++;
            } else if (nums[right] == 0 && f > 0) {
                f--;
                q.push(right);
                right++;
            } else {
                if (!q.empty()) {
                    left = q.front() + 1;
                    q.pop();
                    f++;
                } else {
                    left++;
                    right++;
                }
            }
            ans = max(ans, right - left);
        }
        return ans;
    }
};