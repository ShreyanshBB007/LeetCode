class Solution {
public:
    int countMonobit(int n) {
        if(n==0){
            return 1;
        }
        int num = 0;
        int count = 1;
        int x = 1;
        while(num<=n){
            num = pow(2,x)-1;
            if(num<=n){
                count++;
            }
            x++;
        }
        return count;
    }
};