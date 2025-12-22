class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        string res;
        int count;
        int j;
        for(int i = 0; i<n-1; i++){
            j = 0;
            while(j<s.size()){
                count = 1;
                while(j!=s.size()-1&&s[j]==s[j+1]){
                    count++;
                    j++;
                }
                res+=to_string(count);
                res+=s[j];
                j++;
            }
            s=res;
            res="";
        }
        return s;
    }
};