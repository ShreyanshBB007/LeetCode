class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        vector<int> vec = intervals[0];
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= vec[1] && intervals[i][0] >= vec[0]) {
                vec[1] = max(vec[1], intervals[i][1]);
            } else {
                ans.push_back(vec);
                vec[0] = intervals[i][0];
                vec[1] = intervals[i][1];
            }
        }
        ans.push_back(vec);
        return ans;
    }
};