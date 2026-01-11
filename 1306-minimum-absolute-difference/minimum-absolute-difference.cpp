class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int minn = INT_MAX;
        vector<vector<int>> ans;
        vector<int> temp;
        sort(arr.begin(),arr.end());
        for (int i = 1; i < arr.size(); i++) {
            minn = min(abs(arr[i] - arr[i - 1]), minn);
        }
        for (int i = 1; i < arr.size(); i++) {
            if (abs(arr[i] - arr[i - 1]) == minn) {
                if (arr[i] >= arr[i - 1]) {
                    temp.push_back(arr[i - 1]);
                    temp.push_back(arr[i]);
                } else {
                    temp.push_back(arr[i]);
                    temp.push_back(arr[i - 1]);
                }
                ans.push_back(temp);
                temp.clear();
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};