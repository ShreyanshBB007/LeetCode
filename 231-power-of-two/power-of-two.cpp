class Solution {
public:
    int ipot(int n) {
        if (n == 1) {
            return 1;
        } else if (n <= 0 || n % 2 != 0) {
            return 0;
        } else
            return ipot(n / 2);
    }
    bool isPowerOfTwo(int n) { return ipot(n); }
};
