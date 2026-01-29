class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left = 0;
        int right = 0;
        int maxlen = 0;
        unordered_set<int> s;
        vector<int> freq(fruits.size(), 0);

        while (right < fruits.size()) {
            freq[fruits[right]]++;
            s.insert(fruits[right]);
            while(s.size() > 2) {
                freq[fruits[left]]--;
                if (freq[fruits[left]] == 0) {
                    s.erase(fruits[left]);
                }
                left++;
            }
            maxlen = max(maxlen, right - left + 1);
            right++;
        }

        return maxlen;
    }
};