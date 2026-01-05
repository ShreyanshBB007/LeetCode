class Solution {
public:
    long long coloredCells(int n) {
        long long ans=1,diff=4;
        for(int i=1;i<n;i++){
            ans+=diff;
            diff+=4;
        }
        return ans;
    }
};