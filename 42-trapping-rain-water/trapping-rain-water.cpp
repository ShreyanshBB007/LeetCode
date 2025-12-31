class Solution {
public:
    int trap(vector<int>& height) {
        int w = 0;
        vector<int> prefixmax(height.size(),0);
        prefixmax[0]=height[0];
        vector<int> suffixmax(height.size(),0);
        suffixmax[height.size()-1]=height[height.size()-1];

        for(int i = 1; i<height.size(); i++){
            prefixmax[i]=max(prefixmax[i-1],height[i]);
        }
        for(int i = height.size()-2; i >=0; i--){
            suffixmax[i]=max(suffixmax[i+1],height[i]);
        }

        for(int i = 0; i < height.size()-1; i++){
            if(height[i]<suffixmax[i]&&height[i]<prefixmax[i]){
                w+=min(suffixmax[i],prefixmax[i])-height[i];
            }
        }
        return w;
    }
};