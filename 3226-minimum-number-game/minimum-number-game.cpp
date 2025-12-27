class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;
        int a = 0;
        int b = 0;
        int i = 0;
        sort(nums.begin(), nums.end());
        while(i < nums.size()){
            a = nums[i];
            if(i+1<nums.size()){
                b = nums[i + 1];
                arr.push_back(b);
            }
            arr.push_back(a);
            i = i + 2;

        }
        return arr;
    }
};