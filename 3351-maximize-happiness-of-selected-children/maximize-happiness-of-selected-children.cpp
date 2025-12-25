class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum = 0;
        long long count = 0;
        int t = 0;
        sort(happiness.begin(), happiness.end(), greater<int>());
        for (int i = 0; i < happiness.size(); i++) {
            count = happiness[i] - t;
            if (count > 0) {
                sum += count;
            }
            t++;
            if (t == k) {
                break;
            }
        }
        return sum;
    }
};