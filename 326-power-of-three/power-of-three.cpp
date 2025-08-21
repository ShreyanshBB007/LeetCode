class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0) return false;
        int temp=n;
        while(temp!=1&&temp%3==0){
            temp=temp/3;
        }
        return temp==1;;
        
    }
};