class Solution {
public:
    vector<string> getarr(vector<string> arr, int k){
        if(arr[0].size() == k){
            return arr;
        }
        int n = arr.size();
        vector<string> ans;
        int j = arr[0].size() - 1;
        for(int i = 0; i < arr.size(); i++){
        if(arr[i][j] == '0'){
            ans.push_back(arr[i] + '1');
        } else {
            ans.push_back(arr[i] + '1');
            ans.push_back(arr[i] + '0');
        }
    }
        return getarr(ans, k);
    }
    vector<string> validStrings(int n) {
        vector<string> arr = {"0", "1"};
        return getarr(arr, n);
    }
};