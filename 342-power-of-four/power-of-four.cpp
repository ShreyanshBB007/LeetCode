class Solution {
public:
    int ipof(int n){
        if(n==1){
            return 1;
        }
        else if(n<=0||n%4!=0){
            return 0;
        }
        else return ipof(n/4);
    }
    bool isPowerOfFour(int n) {
        return ipof(n);
    }
};