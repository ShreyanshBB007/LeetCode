class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int size = arr.size();
        long long sum = 0;
        vector<int> left(size, 0);
        vector<int> right(size, 0);
        stack<int> st;
        st.push(size - 1);
        right[size - 1] = size;
        left[0] = -1;
        for (int i = size - 2; i >= 0; i--) {
            while (!st.empty() && arr[i] <= arr[st.top()]) {
                st.pop();
            }
            if (st.empty()) {
                right[i] = size;
            } else
                right[i] = st.top();
            st.push(i);
        }
        st = {};
        st.push(0);
        for (int i = 1; i < size; i++) {
            while (!st.empty() && arr[i] < arr[st.top()]) {
                st.pop();
            }
            if (st.empty()) {
                left[i] = -1;
            } else
                left[i] = st.top();
            st.push(i);
        }

        for (int i = 0; i < size; i++) {
            long long n = (long long)(i - left[i]) * (right[i] - i);
            sum = (sum + n * arr[i]) % 1000000007;
        }
        return sum;
    }
};