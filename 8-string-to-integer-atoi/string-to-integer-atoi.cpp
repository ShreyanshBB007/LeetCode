class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        while (i < s.size()) {
            if (s[i] != ' ') {
                s = s.substr(i, s.size() - i);
                break;
            } else
                i++;
        }
        if (s[0] >= 'A' && s[0] <= 'z') {
            return 0;
        }
        int sign = 1;
        if (s[0] == '-') {
            sign = -1;
            s = s.substr(1, s.size() - 1);
        } else if (s[0] == '+') {
            s = s.substr(1, s.size() - 1);
        }
        i = 0;
        while (i < s.size()) {
            if (s[i] != '0') {
                s = s.substr(i, s.size() - i);
                break;
            } else
                i++;
        }
        i = 0;
        long long ans = 0;
        while (i < s.size() && (s[i] >= '0' && s[i] <= '9')) {
            ans = ans * 10 + (s[i] - '0');
            if (sign * ans > INT_MAX) return INT_MAX;
            if (sign * ans < INT_MIN) return INT_MIN;
            i++;
        }
        return sign*ans;
    }
};