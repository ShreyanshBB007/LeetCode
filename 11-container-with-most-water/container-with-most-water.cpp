class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int area = INT_MIN;
        while(i < height.size() && i < j){
            int h = min(height[i],height[j]);
            int w = j - i;
            area = max(area, h*w);
            if(height[i]>height[j]){
                j--;
            }
            else i++;
        }
        return area;
    }
};