class Solution {
public:
    string getbstring(int num, int n){
        string str = "";
        int temp = num;
        while(temp>0){
            int rem = temp % 2;
            temp /= 2;
            str += to_string(rem);
        }
        reverse(str.begin(), str.end());
        int len = n - str.size();
        string ans = "";
        for(int i = 0; i < len; i++){
            ans+="0";
        }
        ans+=str;
        return ans;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        int decval = 0;
        int limit = pow(2,n) - 1;

        while(decval<=limit){
            string str = getbstring(decval, n);
            int flag = 0;
            for(auto& x : nums){
                if(str == x){
                    flag = 1;
                }
            }
            if(!flag){
                return str;
            }
            else decval++;
        }
        return "";
    }
};