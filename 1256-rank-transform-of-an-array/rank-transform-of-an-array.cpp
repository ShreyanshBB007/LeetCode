class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        int n = arr.size();
        vector<int> ans(n,0);
        if(n == 0){
            ans = {};
            return ans;
        }
        for(int i = 0; i < n; i++){
            pq.push({arr[i],i});
        }
        int rank = 0;
        int prev = INT_MIN;
        while(!pq.empty()){
            auto top = pq.top();
            int val = top.first;
            int ind = top.second;
            if(val != prev){
                rank++;
                prev = val;
            }
            ans[ind] = rank;
            pq.pop();
        }
        return ans;
    }
};