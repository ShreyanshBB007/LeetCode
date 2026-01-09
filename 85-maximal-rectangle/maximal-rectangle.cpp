class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty())
            return 0;
        stack<int> st;
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> nums(rows, vector<int>(cols, 0));
        vector<int> left(cols, 0);
        vector<int> right(cols, cols - 1);
        int area = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                nums[i][j] = matrix[i][j] - '0';
            }
        }

        for (int i = 0; i < rows; i++) {
            if (i > 0) {
                for (int k = 0; k < cols; k++) {
                    if (matrix[i][k] == '1') {
                        nums[i][k] = (i > 0 ? nums[i - 1][k] : 0) + 1;
                    } else {
                        nums[i][k] = 0;
                    }
                }
            }

            for (int j = 0; j < cols; j++) {
                while (!st.empty() && nums[i][j] <= nums[i][st.top()]) {
                    st.pop();
                }
                if (st.empty()) {
                    left[j] = 0;
                } else {
                    left[j] = st.top() + 1;
                }
                st.push(j);
            }
            st = {};
            for (int j = cols - 1; j >= 0; j--) {
                while (!st.empty() && nums[i][j] <= nums[i][st.top()]) {
                    st.pop();
                }
                if (st.empty()) {
                    right[j] = cols - 1;
                } else {
                    right[j] = st.top() - 1;
                }
                st.push(j);
            }

            for (int k = 0; k < cols; k++) {
                int n = (right[k] - left[k] + 1);
                area = max(area, n * nums[i][k]);
            }

            while (!st.empty())
                st.pop();
            fill(left.begin(), left.end(), 0);
            fill(right.begin(), right.end(), cols - 1);
        }
        return area;
    }
};