class Solution {
public:
    // Checks if the array follows a "trionic" pattern:
    // strictly increasing → strictly decreasing → strictly increasing
    // Time: O(n), Space: O(1)
    bool isTrionic(vector<int>& nums) {
        int flag1 = 0, flag2 = 0, flag3 = 0;
        int i = 0, j = 1;
        int n = nums.size();

        // Phase 1: strictly increasing
        while (j < n && nums[i] < nums[j]) {
            flag1 = 1;
            i = j;
            j++;
        }
        if (j >= n || nums[i] == nums[j])
            return false;

        // Phase 2: strictly decreasing
        while (j < n && nums[i] > nums[j]) {
            flag2 = 1;
            i = j;
            j++;
        }
        if (j >= n || nums[i] == nums[j])
            return false;

        // Phase 3: strictly increasing
        while (j < n && nums[i] < nums[j]) {
            flag3 = 1;
            i = j;
            j++;
        }
        if (j != n)
            return false;

        return (flag1 && flag2 && flag3);
    }
};
