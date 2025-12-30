class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int flag = 0;

        for(int i = 0; i< nums1.size(); i++){
            for(int j = 0; j<nums2.size(); j++){
                if(nums1[i]==nums2[j]){
                    flag = 0;
                    for(int k = j+1; k < nums2.size(); k++){
                        if(nums2[k]>nums2[j]){
                            ans.push_back(nums2[k]);
                            flag = 1;
                            break;
                        }
                    }
                    if(flag==0){
                        ans.push_back(-1);
                        break;
                    }
                    else break;
                }
            }

        }
        return ans;
        
    }
};