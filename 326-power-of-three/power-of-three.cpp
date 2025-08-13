class Solution {
public:
    int ipot(int n){
        if(n==1){
            return 1;
        }
        else if(n<3||n%3!=0){
            return 0;
        }
        else return ipot(n/3);
    }
    bool isPowerOfThree(int n) {
        return(ipot(n));
    }
};