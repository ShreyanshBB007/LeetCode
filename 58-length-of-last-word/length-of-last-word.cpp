class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int k;
        for(int i = s.size()-1; i>=0; i--){
            if(s[i]!=' '){
                k=i;
                break;
            }
        }
        while(k>=0&&s[k]!=' '){
            count++;
            k--;
        }
        return count;
    }
};