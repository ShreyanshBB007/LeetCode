class Solution {
public:
    string largestOddNumber(string num) {
        string ans ="";
        for(int i = 0; i<num.size(); i++){
            if(num[i]=='1'){
                ans.assign(num.begin(),num.begin()+1+i);
            }
            else if(num[i]=='3'){
                ans.assign(num.begin(),num.begin()+1+i);
            }
            else if(num[i]=='5'){
                ans.assign(num.begin(),num.begin()+1+i);
            }
            else if(num[i]=='7'){
                ans.assign(num.begin(),num.begin()+1+i);;
            }
            else if(num[i]=='9'){
                ans.assign(num.begin(),num.begin()+1+i);
            }
        }
        return ans;
    }
};