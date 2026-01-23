class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0; i < haystack.size(); i++){
            if(haystack[i]==needle[0]){
                int j  = 1;
                int k = i+1;
                int flag = 0;
                while(j<needle.size()){
                    if(haystack[k]!=needle[j]){
                        flag = 1;
                    }
                    else {
                        k++;
                        j++;
                    }
                    if(flag == 1){
                        break;
                    }
                }
                if(flag==0){
                    return i;
                }
            }
        }
        return -1;
    }
};