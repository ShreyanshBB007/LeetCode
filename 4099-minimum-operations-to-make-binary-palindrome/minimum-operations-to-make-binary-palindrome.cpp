class Solution {
public:
    bool isPalindrome(string str) {
        string rev = str;
        reverse(rev.begin(), rev.end());
        if (str == rev) {
            return true;
        } else
            return false;
    }
    string getbin(int n) {
        int base = 1;
        string str = "";
        while (n > 0) {
            if (n % 2) {
                str += '0';
            } else
                str += '1';
            n /= 2;
        }
        reverse(str.begin(), str.end());
        return str;
    }
    vector<int> minOperations(vector<int>& nums) {
        vector<int> ans(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];

            if (isPalindrome(getbin(x))) {
                ans[i] = 0;
                continue;
            }

            int d = 1;
            while (true) {
                if (isPalindrome(getbin(x + d))) {
                    ans[i] = d;
                    break;
                }
                if (x - d >= 0 && isPalindrome(getbin(x - d))) {
                    ans[i] = d;
                    break;
                }
                d++;
            }
        }
        return ans;
    }
};