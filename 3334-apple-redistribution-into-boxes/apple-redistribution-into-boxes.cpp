class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = 0;
        int count = 0;
        sort(capacity.begin(),capacity.end(),greater<int>());
        for(int i = 0; i < apple.size(); i++){
            sum+=apple[i];
        }
        for(int i = 0; i<capacity.size(); i++){
            if(sum>0){
                sum-=capacity[i];
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};