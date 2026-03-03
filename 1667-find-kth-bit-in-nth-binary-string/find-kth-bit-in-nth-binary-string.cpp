class Solution {
public:
    string invert(string s){
        for(int i = 0; i < s.size(); i++){
            if(s[i]=='0'){
                s[i]='1';
            }
            else s[i] = '0';
        }
        return s;
    }

    string computeS(int n){
        if(n==1){
            return "0";
        }
        string prev = computeS(n-1);
        string invs = invert(prev);
        reverse(invs.begin(), invs.end());
        return (prev + "1" + invs);
    }
    char findKthBit(int n, int k) {
        string str = computeS(n);
        return str[k-1];
    }
};