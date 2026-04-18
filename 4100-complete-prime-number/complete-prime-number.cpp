class Solution {
public:
    bool isPrime(int n) {
        if (n < 2)
            return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    bool completePrime(int num) {
        string snum = to_string(num);
        if (snum.size() == 1) {
            if (isPrime(num)) {
                return true;
            } else
                return false;
        }
        string str = "";
        for (int i = 0; i < snum.size(); i++) {
            str += snum[i];
            if (!isPrime(stoi(str))) {
                return false;
            }
        }
        str = "";
        for (int i = snum.size() - 1; i >= 0; i--) {
            str.insert(str.begin(), snum[i]); 
            if (!isPrime(stoi(str))) {
                return false;
            }
        }

        return true;
    }
};