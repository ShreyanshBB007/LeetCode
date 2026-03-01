class Solution {
public:
    int minPartitions(string n) {
        int maxx = 0;
        for(int i = 0; i<n.size(); i++){
            maxx = max(maxx, n[i]-'0');
        }
        return maxx;
    }
};