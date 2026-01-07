class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;
        int sum = 0;
        int val = 0;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                val = st[st.size() - 2] + st[st.size() - 1];
                st.push_back(val);
                sum += val;
            } else if (operations[i] == "C") {
                sum -= st.back();
                st.pop_back();
            } else if (operations[i] == "D") {
                sum += 2 * st.back();
                st.push_back(2 * st.back());
            } else {
                st.push_back(stoi(operations[i]));
                sum += st.back();
            }
        }
        return sum;
    }
};