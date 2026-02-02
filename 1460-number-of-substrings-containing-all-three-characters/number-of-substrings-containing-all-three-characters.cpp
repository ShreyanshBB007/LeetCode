class Solution {
public:
    int numberOfSubstrings(string s) {
        int left = 0; 
        int right = 0;
        int ans = 0;
        unordered_map<char,int> count;
        int n = s.size();

        while(right<n){
            if(s[right]=='a'){
                count['a']++;
            }
            else if(s[right]=='b'){
                count['b']++;
            }
            else if(s[right]=='c'){
                count['c']++;
            }
            while(count['a']>=1&&count['b']>=1&&count['c']>=1){
                ans+=n-right;
                count[s[left]]--;
                left++;
            }
            right++;
        }

        return ans;
    }
};