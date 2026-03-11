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
        string rev = "";

        for (char c : str) {
            if (c == '0') {
                rev += '1';
            } else
                rev += '0';
        }

        int ans = 0;
        int t = 0;

        for(int i = rev.size()-1; i>= 0; i--) {
            if(rev[i]-'0' == 1){
                ans += pow(2,t);
            }
            t++;
        }
        return ans;
    }
};