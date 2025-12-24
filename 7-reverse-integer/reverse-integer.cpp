class Solution {
public:
    int reverse(int x) {
        long long rem = 0;
        long long ans= 0;
        if(x == 0){
            return 0;
        }
        int sign = 0;
        if(x>0){
            sign = 1;
        }
        else sign = -1;
        long long k = (long long)sign * x;

        while(k>0){
            rem = k%10;
            ans = ans*10 + rem;
            k/=10;
        }
        if(sign*ans>INT_MAX||sign*ans<INT_MIN){
            return 0;
        }
        else return sign*ans;
    }
};