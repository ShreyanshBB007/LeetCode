class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0; 
        int right = 0;
        int maxlen = 1;
        int maxx = 0;
        vector<int> freq(26,0);

        while(right<s.size()){
            freq[s[right]-'A']++;
            maxx = max(maxx,freq[s[right]-'A']);
            if((right - left + 1)-maxx<=k){
                maxlen = max(maxlen,right-left+1);
            }
            else{
                freq[s[left]-'A']--;
                left++;
            }
            right++;
        }
        return maxlen;
    }
};