class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) {
            return 1;
        }
        string str = "";
        while (n > 0) {
            int rem = n % 2;
            n /= 2;
            str += to_string(rem);
        }
        int ans = 0;
        int t = 0;
        for(int i = 0; i<str.size(); i++) {
            if(str[i] == '0'){
                ans += pow(2,t);
            }
            t++;
        }
        return ans;
    }
};