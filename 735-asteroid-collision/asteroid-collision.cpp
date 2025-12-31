class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> ans;
        st.push(asteroids[0]);
        int i = 1;

        while (i < asteroids.size() && !st.empty()) {
            int s = st.top();
            if (asteroids[i] > 0) {
                st.push(asteroids[i]);
                i++;
            } else if (asteroids[i] < 0) {
                while (true) {
                    if (s < 0 && asteroids[i] < 0) {
                        st.push(asteroids[i]);
                        s = st.top();
                        i++;
                        break;
                    } else if (s > 0) {
                        if (s < abs(asteroids[i])) {
                            st.pop();
                        } else if (s == abs(asteroids[i])) {
                            st.pop();
                            i++;
                            if(st.empty()&&i!=asteroids.size()){
                                st.push(asteroids[i]);
                                s = st.top();
                                i++;
                            }
                            break;
                        } else {
                            i++;
                            break;
                        }

                        if (st.empty()) {
                            st.push(asteroids[i]);
                            s = st.top();
                            i++;
                            break;
                        } else
                            s = st.top();
                    }
                }
            }
        }

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};