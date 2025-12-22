class Solution {
public:
    int reversenum(int n){
        int k = n;
        int rem = 0;
        int ans = 0;
        while(k>0){
            rem = k%10;
            ans = ans*10 + rem;
            k/=10;
        }
        return ans;
    }
    int mirrorDistance(int n) {
        return abs(n-reversenum(n)); 
    }
};