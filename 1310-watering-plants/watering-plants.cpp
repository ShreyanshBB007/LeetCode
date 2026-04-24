class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n=plants.size();
        int ans=0;
        int can = capacity;
        
        for(int i=0;i<n;i++){
            if(can < plants[i]){
                can = capacity;
                ans += 2*i;
            }

            ans++;
            can -= plants[i];
        }
        return ans;
    }
};