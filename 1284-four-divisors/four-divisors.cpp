class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        int count = 0;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum = nums[i] + 1;
            count = 2;
            for (int j = 2; j * j <= nums[i]; j++) {
                if (nums[i] % j == 0) {
                    if (j * j == nums[i]) {
                        count += 1;
                    } else {
                        count+=2;
                    }
                    sum += j + (nums[i] / j);
                }
            }
            if(count==4){
                ans += sum;
            }
        }
        return ans;
    }
};