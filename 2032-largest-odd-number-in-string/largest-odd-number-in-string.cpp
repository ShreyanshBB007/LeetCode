class Solution {
public:
    string largestOddNumber(string num) {
        string ans ="";
        for(int i = num.size()-1; i>=0; i--){
            if(num[i]=='1'){
                ans.assign(num.begin(),num.begin()+1+i);
                return ans;
            }
            else if(num[i]=='3'){
                ans.assign(num.begin(),num.begin()+1+i);
                return ans;
            }
            else if(num[i]=='5'){
                ans.assign(num.begin(),num.begin()+1+i);
                return ans;
            }
            else if(num[i]=='7'){
                ans.assign(num.begin(),num.begin()+1+i);
                return ans;
            }
            else if(num[i]=='9'){
                ans.assign(num.begin(),num.begin()+1+i);
                return ans;
            }
        }
        return ans;
    }
};