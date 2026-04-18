class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char, int> mpp;
        for(int i = 0; i < s.size(); i++){
            mpp[s[i]]++;
            mpp[t[i]]--;
        }
        for(auto const& [x, y] : mpp){
            if(y != 0){
                return false;
            }
        }
        return true;
    }
};