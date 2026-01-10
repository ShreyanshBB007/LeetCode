class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> st;
        vector<int> next(n,0);

        for(int i = n-1; i>=0; i--){
            while(!st.empty()&&temperatures[i]>=temperatures[st.top()]){
                st.pop();
            }
            if(st.empty()){
                next[i]=0;
                st.push(i);
            }
            else{
                next[i]=st.top()-i;
                st.push(i);
            }
        }

        return next;
    }
};