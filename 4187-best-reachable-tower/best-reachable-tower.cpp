class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        
        int cx = center[0];
        int cy = center[1];

        int bestQ = -1;
        vector<int> ans = {-1, -1};

        for(auto &t : towers)
        {
            int x = t[0];
            int y = t[1];
            int q = t[2];

            int dist = abs(x - cx) + abs(y - cy);

            if(dist <= radius)
            {
                if(q > bestQ || 
                  (q == bestQ && (x < ans[0] || (x == ans[0] && y < ans[1]))))
                {
                    bestQ = q;
                    ans = {x, y};
                }
            }
        }

        return ans;
    }
};