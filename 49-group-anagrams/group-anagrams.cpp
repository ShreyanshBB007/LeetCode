class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, int> mp;
        int t = 0;
        vector<vector<string>> ans(n);

        for(int i = 0; i < n; i++){
            string str = strs[i];
            sort(str.begin(), str.end());
            if(!mp.count(str)){
                mp[str] = t;
                t++;
            }
            ans[mp[str]].push_back(strs[i]);
        }
        ans.erase(ans.begin() + t, ans.end());
        return ans;  
    }
};