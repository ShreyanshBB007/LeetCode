class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int sum = 0;
        int n = piles.size();
        for(int i = 1; i<=(n/3); i++){
            sum+=piles[n-2*i];
        }
        return sum;
    }
};