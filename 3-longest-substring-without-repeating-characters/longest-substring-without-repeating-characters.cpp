class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, pair<int, int>> mp;
        int maxlen = 0;
        int currlen = 0;
        int l = 0;
        int r = 0;
        while (l <= r && r < s.size()) {
            mp[s[r]].first++;
            if (mp[s[r]].first > 1) {
                maxlen = max(maxlen, currlen);
                while(l<=mp[s[r]].second){
                    mp[s[l]].first--;
                    l++;
                }
                currlen = r - l + 1;
                mp[s[r]].second = r;
                r++;
            } else {
                mp[s[r]].second = r;
                currlen = r - l + 1;
                r++;
            }
        }
        maxlen = max(maxlen, currlen);
        return maxlen;
    }
};