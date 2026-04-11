class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        string dig = to_string(digit);
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            string num = to_string(nums[i]);
            for(int j = 0; j < num.size(); j++){
                if(num[j] == dig[0]){
                    ans++;
                }
            }
        }
        return ans;
    }
};