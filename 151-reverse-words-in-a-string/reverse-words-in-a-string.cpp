class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int j = s.size()-1;
        string x;
        while(i<=j&&s[i]==' '){
            i++;
        }
        while(j>=0&&s[j]==' '){
            j--;
        }
        while(i <= j){
            if(s[i]!=' '){
                x+=s[i];
                i++;
            }
            else if(s[i]==' '){
                x+=' ';
                while(i <= j&&s[i]==' '){
                    i++;
                }
            }
        }
        s ="";
        int k = 0;
        int a = x.size()-1;
        cout<<x;
        while(a>=0){
            while(a>=0&&x[a]!=' '){
                a--;
            }
            k = a;
            a++;
            while(a<x.size()&&x[a]!=' '){
                s+=x[a];
                a++;
            }
            s+=' ';
            a = k-1;
        }
        s.erase(s.size()-1,1);
        return s;
    }
};