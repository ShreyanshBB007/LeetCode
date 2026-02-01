class Solution {
public:
    int atMost(vector<int>& nums, int k){
        int count = 0;
        int left = 0;
        int right = 0;
        int odds = 0;

        while(right<nums.size()){
            if(nums[right]%2==1){
                odds++;
            }
            while(odds>k){
                    if(nums[left]%2==1){
                        odds--;
                    }
                    left++;
                }
            if(odds<=k){
                count+=right-left+1;
            }
            right++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums,k)-atMost(nums, k-1);
    }
};