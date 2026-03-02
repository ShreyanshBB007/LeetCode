class Solution {
public:
    string trimTrailingVowels(string s) {
        string ans = "";
        int k;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                continue;
            } else {
                k = i;
                break;
            }
        }
        for (int i = 0; i <= k; i++) {
            ans += s[i];
        }
        return ans;
    }
};