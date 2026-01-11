class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if (nums.size() == 1) {
            return 1;
        }
        int flag;
        int count;
        int k = 1;
        while(k<nums.size()){
            if(nums[k]-nums[k-1]==0){
                k++;
                if(k==nums.size()){
                    return 1;
                }
                continue;
            }
            if (nums[k] - nums[k-1] > 0) {
                    flag = -1;
                    count = 2;

                } else {
                    flag = 1;
                    count = 2;

                }
            break;
        }

        for (int i = k+1; i < nums.size(); i++) {
            if (nums[i] == nums[i-1]) continue;
            if (flag * (nums[i] - nums[i - 1]) > 0) {
                flag *= -1;
                count++;
            } else {
                if (nums[i] - nums[i-1] > 0) {
                    flag = -1;
                } else {
                    flag = 1;
                }
            }
        }
        return count;
    }
};