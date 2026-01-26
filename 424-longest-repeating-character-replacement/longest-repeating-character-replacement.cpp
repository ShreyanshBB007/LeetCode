class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int maxf = 0, maxl = 0;
        int h[26] = {0};

        for (int r = 0; r < s.size(); r++) {
            h[s[r] - 'A']++;
            maxf = max(maxf, h[s[r] - 'A']);

            while (r - l + 1 - maxf > k) {
                h[s[l] - 'A']--;
                l++;
            }

            maxl = max(maxl, r - l + 1);
        }

        return maxl;
    }
};