class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) 
    {
        sort(hBars.begin(), hBars.end());
        sort(vBars.begin(), vBars.end());
        int x = hBars.size();
        int y = vBars.size();
        int hcount = 1;
        int hmax = 1;
        int vcount = 1;
        int vmax = 1;

        for (int i = 0; i < x - 1; i++) {
            if (hBars[i] == hBars[i + 1] - 1) {
                hcount++;
            } else {
                hcount = 1;
            }
            hmax = max(hcount, hmax);
        }
        for (int i = 0; i < y - 1; i++) {
            if (vBars[i] == vBars[i + 1] - 1) {
                vcount++;
            } else {
                vcount = 1;
            }
            vmax = max(vcount, vmax);
        }
        return (min(hmax, vmax) + 1) * (min(hmax, vmax) + 1);
    }
};