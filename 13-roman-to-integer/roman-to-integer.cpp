class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int value = 0;
        for (int i = 0; i < n; i++) {
            if (s.at(i) == 'M') {
                value += 1000;
            }
            if (s.at(i) == 'D') {
                value += 500;
            }
            if (s.at(i) == 'C') {

                if (i != n - 1 && (s.at(i + 1) == 'M' || s.at(i + 1) == 'D')) {
                    value -= 100;
                }

                else value += 100;
            }
            if (s.at(i) == 'L') {
                value += 50;
            }
            if (s.at(i) == 'X') {

                if (i != n - 1 && (s.at(i + 1) == 'L' || s.at(i + 1) == 'C')) {
                    value -= 10;
                }

                else value += 10;
            }
            if (s.at(i) == 'V') {
                value += 5;
            }
            if (s.at(i) == 'I') {

                if (i != n - 1 && (s.at(i + 1) == 'V' || s.at(i + 1) == 'X')) {
                    value -= 1;
                }

                else value += 1;
            }
        }
        return value;
    }
};