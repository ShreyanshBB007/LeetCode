class Solution {
public:
    bool isprime(int num){
        if(num == 1) {
            return false;
        }
        for(int i = 2; i <= sqrt(num); i++){
            if(num%i == 0){
                return false;
            }
        }
        return true;
    }
    int getnearestprime(int num){
        int ans = num;
        while(!isprime(ans)){
            ans++;
        }
        return ans;
    }
    int getnearestnonprime(int num){
        int ans = num;
        while(isprime(ans)){
            ans++;
        }
        return ans;
    }
    int minOperations(vector<int>& nums) {
        int cost = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i%2 == 0){
                int val = getnearestprime(nums[i]);
                cost += val - nums[i];
            }
            else {
                int val = getnearestnonprime(nums[i]);
                cost += val - nums[i];
            }
        }
        return cost;
    }
};