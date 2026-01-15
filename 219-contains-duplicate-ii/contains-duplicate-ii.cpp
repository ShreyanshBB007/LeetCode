class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(nums.size()==1){
            return false;
        }
        unordered_map<int,pair<int,int>>mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]].first++;
            if(mp[nums[i]].first>1){
                if(abs(mp[nums[i]].second-i)<=k){
                    return true;
                }
            }
            mp[nums[i]].second = i;
        }
        return false;
    }
};