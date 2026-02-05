class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int left = 0;
        int right = 0; 
        long long sum = 0;
        long long prod = 1;
        long long ans = 0;

        while(right<nums.size()){
            sum+=nums[right];
            prod = sum*(right - left + 1);
            if(prod<k){
                ans+=(right-left+1);
            }
            else{
                while(prod>=k){
                    sum-=nums[left];
                    left++;
                    prod = sum*(right - left + 1);
                }
                ans+=(right-left+1);  
            }
            right++;
        }
        return ans;
    }
};