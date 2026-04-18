class Solution {
public:
    bool isPalindrome(string str){
        string rev = str;
        reverse(rev.begin(), rev.end());
        if(str == rev){
            return true;
        }
        else return false;
    }
    string getbin(int n){
        int base = 1;
        string str = "";
        while(n>0){
            if(n%2){
                str+='0';
            }
            else str+='1';
            n /= 2;
        }
        reverse(str.begin(), str.end());
        return str;
    }
    vector<int> minOperations(vector<int>& nums) {
        vector<int> ans(nums.size());

        for(int i = 0; i < nums.size(); i++){
            int ops = 0;
            if(!isPalindrome(getbin(nums[i]))){
                ops++;
                int nums1 = nums[i] + 1;
                int nums2 = nums[i] - 1;
                while(!isPalindrome(getbin(nums1)) && !isPalindrome(getbin(nums2))){
                    nums1++;
                    if(nums2>0){
                        nums2--;
                    }
                    ops++;
                }
            }
            ans[i] = ops;
        }
        return ans;
    }
};