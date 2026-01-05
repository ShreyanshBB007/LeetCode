class Solution {
public:
    long long coloredCells(int n) {
        if(n==1) return 1;

        return n*(long long)n+(n-1)*(long long)(n-1);
    }
};