class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& a) {
        vector<long long> v;
        for (int x : a) {
            long long y = x;
            while (!v.empty() && v.back() == y) {
                y += v.back();
                v.pop_back();
            }
            v.push_back(y);
        }
        return v;
    }
};