class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int sum = 0;
        int n = piles.size();
        int steps = n / 3;
        int maxx = *max_element(piles.begin(), piles.end());
        vector<int> freq(maxx + 1, 0);
        for (int i = 0; i < n; i++) {
            freq[piles[i]]++;
        }
        int low = 0;
        int high = maxx;
        while (steps > 0) {
            while (high >= 0 && freq[high] == 0) {
                high--;
            }
            freq[high]--;
            while (high >= 0 && freq[high] == 0) {
                high--;
            }
            sum += high;
            freq[high]--;
            while (low < high && freq[low] == 0) {
                low++;
            }
            freq[low]--;
            steps--;
        }
        return sum;
    }
};