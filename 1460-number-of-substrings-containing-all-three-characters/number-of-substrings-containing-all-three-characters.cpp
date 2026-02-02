class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt[3] = {0}, left = 0, ans = 0;
        for (int right = 0; right < s.size(); right++) {
            cnt[s[right] - 'a']++;
            while (cnt[0] && cnt[1] && cnt[2]) {
                ans += s.size() - right;
                cnt[s[left++] - 'a']--;
            }
        }
        return ans;
    }
};
