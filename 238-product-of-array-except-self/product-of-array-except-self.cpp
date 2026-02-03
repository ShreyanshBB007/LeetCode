class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n  = nums.size();
        vector<int> prefixprod(n,1);
        vector<int> suffixprod(n,1);
        int prod = 1;
        prefixprod[0]=1;
        suffixprod[n-1]=1;
        vector<int> ans;
        int flag = 1;          
        int zero = 0;

        // for(int i = 0; i < n; i++){
        //     if(nums[i]==0){
        //         flag = 0;
        //         zero = i;
        //     }
        //     else prod*=nums[i];
        // }
        // if(!flag){
        //     ans[zero]=prod;
        // }
        for(int i = 1; i <n; i++){
            prefixprod[i]=prefixprod[i-1]*nums[i-1];
        }
        for(int i = n-2; i >=0; i--){
            suffixprod[i]=suffixprod[i+1]*nums[i+1];
        }
        for(int i = 0; i<n; i++){
            ans.push_back(prefixprod[i]*suffixprod[i]);
        }
        return ans;
        
    }
};
