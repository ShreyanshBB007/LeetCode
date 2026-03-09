class Solution {
public:
    int minOperations(string s) {
        int minn = INT_MAX;
        int maxx = INT_MIN;
        int minpos;
        int maxpos;
        int n = s.size();
        int flag = 0;
        vector<int> hash(26,0);
        int multi = 0;
        for(int i = 0; i < n-1; i++){
            if(s[i] > s[i+1]){
                flag = 1;
            }
        }
        if(!flag){
            return 0;
        }
        for(int i = 0; i < n; i++){
            if(minn>s[i]){
                minn = s[i];
                minpos = i;
            }
            if(maxx<=s[i]){
                maxx = s[i];
                maxpos = i;
            }
            hash[s[i]-'a']++;
        }
        if((hash[minn-'a'] > 1) || (hash[maxx-'a'] > 1)){
            multi = 1;
        }
        if(n == 2 && minpos == 1){
            return -1;
        }
        else if(minpos == 0 || maxpos == n-1){
            return 1;
        }
        else if(minpos != n-1 && maxpos != 0){
            return 2;
        }
        else if(minpos == n-1 && maxpos == 0 && !multi){
            return 3;
        }
        else if(minpos == n-1 && maxpos == 0 && multi){
            return 2;
        }
        else if(minpos == n-1 || maxpos == 0){
            return 2;
        }
        return 1;
    }
};