class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low = 0;
        int high = numbers.size() - 1;
        vector<int> ans(2, 0);
        for (int i = 0; i < numbers.size(); i++) {
            low = 0;
            high = numbers.size()-1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (numbers[mid] + numbers[i] == target&&mid!=i) {
                    ans[0] = i + 1;
                    ans[1] = mid + 1;
                    sort(ans.begin(), ans.end());
                    return ans;
                }

                if (numbers[mid] + numbers[i] > target) {
                    high = mid-1;
                } else
                    low = mid+1;
            }
        }
        return ans;
    }
};