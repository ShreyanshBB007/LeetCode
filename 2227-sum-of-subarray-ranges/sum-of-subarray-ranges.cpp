class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int size = nums.size();
        long long minsum = 0;
        long long maxsum = 0;
        vector<int> leftmin(size, 0);
        vector<int> rightmin(size, 0);
        vector<int> leftmax(size, 0);
        vector<int> rightmax(size, 0);
        stack<int> st;
        st.push(size - 1);
        rightmin[size - 1] = size;
        leftmin[0] = -1;
        rightmax[size - 1] = size;
        leftmax[0] = -1;

        for (int i = size - 2; i >= 0; i--) {
            while (!st.empty() && nums[i] <= nums[st.top()]) {
                st.pop();
            }
            if (st.empty()) {
                rightmin[i] = size;
            } else
                rightmin[i] = st.top();
            st.push(i);
        }

        st = {};
        st.push(0);
        for (int i = 1; i < size; i++) {
            while (!st.empty() && nums[i] < nums[st.top()]) {
                st.pop();
            }
            if (st.empty()) {
                leftmin[i] = -1;
            } else
                leftmin[i] = st.top();
            st.push(i);
        }

        st = {};
        st.push(size - 1);
        for (int i = size - 2; i >= 0; i--) {
            while (!st.empty() && nums[i] >= nums[st.top()]) {
                st.pop();
            }
            if (st.empty()) {
                rightmax[i] = size;
            } else
                rightmax[i] = st.top();
            st.push(i);
        }

        st = {};
        st.push(0);
        for (int i = 1; i < size; i++) {
            while (!st.empty() && nums[i] > nums[st.top()]) {
                st.pop();
            }
            if (st.empty()) {
                leftmax[i] = -1;
            } else
                leftmax[i] = st.top();
            st.push(i);
        }

        for (int i = 0; i < size; i++) {
            long long nmin = (long long)(i - leftmin[i]) * (rightmin[i] - i);
            minsum = (minsum + nmin * nums[i]);
            long long nmax = (long long)(i - leftmax[i]) * (rightmax[i] - i);
            maxsum = (maxsum + nmax * nums[i]);
        }
        return maxsum - minsum;
    }
};