class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0, j = -1;
        vector<int> lastSeen(128, -1);

        for (int i = 0; i < s.length(); i++) {
            j = max(j, lastSeen[s[i]]);
            ans = max(ans, i - j);
            lastSeen[s[i]] = i;
        };
        return ans;
    }
};