class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int maxx = 0;
        int minn = INT_MAX;
        vector<int> maxprefix(n,0);
        vector<int> minsuffix(n,0);
        for(int i = 0; i < n; i++){
            maxx = max(maxx, nums[i]);
            maxprefix[i] = maxx;
        }
        for(int i = n-1; i >=0; i--){
            minn = min(minn, nums[i]);
            minsuffix[i] = minn;
        }
        for(int i = 0; i < n; i++){
            int score = maxprefix[i] - minsuffix[i];
            if(score<=k){
                return i;
            }
        }
        return -1;
    }
};