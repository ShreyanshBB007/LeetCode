class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int left = 0;
        int right = 0;
        int n = nums.size();
        long long ans = 0;
        multiset<long long> minn;
        multiset<long long, greater<long long>> maxx;

        while(right<n){
            minn.insert(nums[right]);
            maxx.insert(nums[right]);
            long long cost = (1LL * (*maxx.begin() - *minn.begin())) * (right - left + 1);
            while(left<n&&cost>k){
                auto it1 = minn.find(nums[left]);
                minn.erase(it1);
                auto it2 = maxx.find(nums[left]);
                maxx.erase(it2);
                left++;
                cost = (1LL * (*maxx.begin() - *minn.begin())) * (right - left + 1);
            }
            ans+=(right-left+1);
            right++;
        }
        return ans;
    }
};