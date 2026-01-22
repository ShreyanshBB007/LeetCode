class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int can = capacity;
        int steps = 0;
        for(int i = 0; i < plants.size(); i++){
            if(can>=plants[i]){
                can -= plants[i];
                steps++;
            }
            else {
                can = capacity;
                can -= plants[i];
                steps += (2*i) + 1;
            }
        }
        return steps;
    }
};