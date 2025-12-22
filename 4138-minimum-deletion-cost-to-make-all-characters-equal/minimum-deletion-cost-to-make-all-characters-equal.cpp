class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        unordered_map<char, long long> mpp;
        long long maxx = 0;
        long long ans = 0;
        int flag = 0;
        for (int i = 0; i < s.size(); i++) {
            mpp[s[i]] += cost[i];
        }
        for (auto it = mpp.begin(); it != mpp.end(); ++it) {
            if (it->second > maxx) {
                maxx = it->second;
            }
        }
        for (auto it = mpp.begin(); it != mpp.end(); ++it) {
            if (it->second == maxx && flag == 0) {
                flag = 1;
            } else {
                ans += it->second;
            }
        }
        return ans;
    }
};