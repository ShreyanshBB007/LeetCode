class Solution {
public:
    int findComplement(int num) {
          if (num == 0) {
            return 1;
        }
        string str = "";
        while (num > 0) {
            int rem = num % 2;
            num /= 2;
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