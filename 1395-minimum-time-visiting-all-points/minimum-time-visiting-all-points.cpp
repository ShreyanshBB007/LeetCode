class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int h = 0;
        int v = 0;
        int t = 0;
        for(int i = 0; i < points.size()-1; i++){
            h = points[i][0]-points[i+1][0];
            v = points[i][1]-points[i+1][1];
            t+=max(abs(h),abs(v));
        }
        return t;
    }
};
