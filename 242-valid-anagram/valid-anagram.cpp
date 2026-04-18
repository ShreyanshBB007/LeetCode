class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.size() != t.size()) return false;
        
        int freq[26] = {}; 
        for (char c : s) freq[c - 'a']++;
        for (char c : t) freq[c - 'a']--;
        
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) return false;
        }
        return true;
    }
};