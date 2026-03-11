class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) {
            return 1;
        }

        int temp = n;
        string str = "";

        while (temp > 0) {
            int rem = temp % 2;
            temp /= 2;
            str += to_string(rem);
        }
        
        reverse(str.begin(), str.end());
        int ans = 0;
        int t = 0;

        for(int i = str.size()-1; i>= 0; i--) {
            if(str[i] == '0'){
                ans += pow(2,t);
            }
            t++;
        }
        return ans;
    }
};