class Solution {
public:
    bool isHappy(int n) {
        long long rem = 0;
        long long k = n;
        long long ans = 0;
        map<int, int> mpp;
        while (ans != 1) {
            ans = 0;
            while (k > 0) {
                rem = k % 10;
                ans += rem * rem;
                k /= 10;
            }
            mpp[ans]++;
            if(mpp[ans]>1){
                return false;
            }
            else if(ans==1){
                return true;
            }
            k = ans;
        }
        return true;
    }
};