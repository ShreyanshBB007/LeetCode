// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         long long maxp = LLONG_MIN;
//         long long product = 1;
//         for (int i = 0; i < nums.size(); i++) {
//             product *= nums[i];
//             maxp = max(maxp, product);
//             if (product < 1) {
//                 product = 1;
//             }
//         }
//          if (maxp > INT_MAX || maxp < INT_MIN) {
//             return 0;
//         }
//         return (int)maxp;
        
//     }
// };
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currMax = nums[0];
        int currMin = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int x = nums[i];
            if (x < 0) swap(currMax, currMin);

            currMax = max(x, currMax * x);
            currMin = min(x, currMin * x);

            ans = max(ans, currMax);
        }
        return ans;
    }
};

