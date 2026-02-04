class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int flag1 = 0, flag2 = 0, flag3 = 0;
        int i = 0, j = 1;
        int n = nums.size();

        while (j < n && nums[i] < nums[j]) {
            flag1 = 1;
            i = j;
            j++;
        }
        if (j >= n || nums[i] == nums[j])
            return false;

        while (j < n && nums[i] > nums[j]) {
            flag2 = 1;
            i = j;
            j++;
        }
        if (j >= n || nums[i] == nums[j])
            return false;

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