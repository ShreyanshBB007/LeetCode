class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int area = 0;
        int n;
        int minn;
        stack<int> st;
        int s = heights.size();
        vector<int> left(s, 0);
        vector<int> right(s, 0);

        for (int i = s - 1; i >= 0; i--) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            if (!st.empty() && heights[st.top()] < heights[i]) {
                right[i] = st.top() - 1;
            }
            if (st.empty()) {
                right[i] = s - 1;
            }
            st.push(i);
        }
        st = {};
        for (int i = 0; i < s; i++) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            if (!st.empty() && heights[st.top()] < heights[i]) {
                left[i] = st.top() + 1;
            }
            if (st.empty()) {
                left[i] = 0;
            }
            st.push(i);
        }

        for (int i = 0; i < s; i++) {
            // minn = (i-left[i])*(right[i]-i);
            n = (right[i] - left[i] + 1);
            // if((left[i]==-1||right[i]==s)&&n>s){
            //     n = s;
            // }
            area = max(area, n * heights[i]);
            cout << area << endl;
        }

        return area;
    }
};