class Solution {
public:
    char findKthBit(int n, int k) {
        if (n == 1)
            return '0';
        int half = ((1 << n) - 1) / 2;
        cout << half << endl;
        if (half + 1 == k)
            return '1';
        else if (k <= half)
            return findKthBit(n - 1, k);
        else
            return findKthBit(n - 1, half + 1 - (k - half - 1)) == '1' ? '0' : '1';
    }
};