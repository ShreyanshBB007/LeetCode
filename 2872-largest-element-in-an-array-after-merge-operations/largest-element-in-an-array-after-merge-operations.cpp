class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        long long curr = nums[nums.size()-1];
        long long maxx = *max_element(nums.begin(), nums.end());
        for (int i = nums.size()-2; i >=0; i--) {
            if(nums[i]<=curr){
                curr += nums[i];
                maxx = max(curr,maxx);
            }
            else{
                curr = nums[i];
            }
        }
        return maxx;
    }
};