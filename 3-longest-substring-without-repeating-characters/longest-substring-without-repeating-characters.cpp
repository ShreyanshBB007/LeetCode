class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, pair<int, int>> mp;
        int maxlen = 0, l = 0, r = 0;
        while (l <= r && r < s.size()) {
            mp[s[r]].first++;
            if (mp[s[r]].first > 1) {
                while (l <= mp[s[r]].second) {
                    mp[s[l]].first--;
                    l++;
                }
            }
            mp[s[r]].second = r;
            maxlen = max(maxlen, r - l + 1);
            r++;
        }
        return maxlen;
    }
};