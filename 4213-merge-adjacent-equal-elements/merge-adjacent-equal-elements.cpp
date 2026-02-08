class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> stack; 
        for (long long x : nums) {
            while (!stack.empty() && stack.back() == x) {
                stack.pop_back(); 
                x *= 2;           
            }
            stack.push_back(x);   
        }
        return stack;
    }
};