class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans;
        if(arr.size() == 0){
            return ans;
        }
        vector<int> vec = arr;
        sort(vec.begin(), vec.end());
        map<int, int> mpp;
        mpp[vec[0]] = 1;
        for(int i = 1; i < arr.size(); i++){
            if(vec[i] > vec[i-1]){
                mpp[vec[i]] = mpp[vec[i-1]] + 1;
            }
            else mpp[vec[i]] = mpp[vec[i-1]];
        }
        for(int i : arr){
            ans.push_back(mpp[i]);
        }
        return ans;
    }
};