class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(nums.size()==1){
            return false;
        }
        int j = 1;
        for(int i = 0; i < nums.size(); i++){
            j = i + 1;
            while(j<nums.size()&&j<=i+k){
                if(nums[i]==nums[j]){
                    return true;
                }
                j++;
            }
        }
        return false;
    }
};