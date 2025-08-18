class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int j=0;
        int n = s.length();
        for(int i=0; i<n/2; i++){
            j=n-1-i;
            if(s.at(i)!=s.at(j)){
                return false;
            }  
        }
        return true;

        
    }
};