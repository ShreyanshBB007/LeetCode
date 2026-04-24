class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l = 0;
        int r = 0;
        int k = 0;

        for(char c : moves){
            if(c == 'L'){
                l++;
            }
            else if(c == 'R'){
                r++;
            }
            else k++;
        }
        // if(l!=r){
            return (abs(l-r) + k);
        // }
    }
};