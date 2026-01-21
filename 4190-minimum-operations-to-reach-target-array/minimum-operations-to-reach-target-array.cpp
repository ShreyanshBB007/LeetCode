#include <vector>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {
        bool seen[100001] = {false};
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            if (nums[i] != target[i]) {
                if (!seen[nums[i]]) {
                    seen[nums[i]] = true;
                    count++;
                }
            }
        }
        return count;
    }
};