class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty())
            return 0;

        int rows = matrix.size(), cols = matrix[0].size();
        vector<int> heights(cols, 0), left(cols), right(cols);
        stack<int> st;
        int area = 0;

        for (int i = 0; i < rows; i++) {

            for (int j = 0; j < cols; j++) {
                heights[j] = (matrix[i][j] == '1') ? heights[j] + 1 : 0;
            }
            while (!st.empty())
                st.pop();
            for (int j = 0; j < cols; j++) {
                while (!st.empty() && heights[st.top()] >= heights[j]) {
                    st.pop();
                }
                left[j] = st.empty() ? 0 : st.top() + 1;
                st.push(j);
            }
            while (!st.empty())
                st.pop();
            for (int j = cols - 1; j >= 0; j--) {
                while (!st.empty() && heights[st.top()] >= heights[j]) {
                    st.pop();
                }
                right[j] = st.empty() ? cols - 1 : st.top() - 1;
                st.push(j);
            }
            for (int j = 0; j < cols; j++) {
                area = max(area, heights[j] * (right[j] - left[j] + 1));
            }
        }
        return area;
    }
};
