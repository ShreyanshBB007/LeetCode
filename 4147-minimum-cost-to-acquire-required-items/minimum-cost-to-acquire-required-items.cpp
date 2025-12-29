class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        if (cost1 == 0 && cost2 == 0) {
            return 0;
        }
        long long t1 = 0;
        long long t2 = 0;
        long long t3 = 0;
        long long n1 = need1;
        long long n2 = need2;
        if (need1 > need2) {
            t1 = costBoth * n2;
            n1 -= n2;
            cout << t1 << endl;
            t1 += min(cost1 * n1, costBoth * n1);
            cout << t1 << endl;
        } else {
            t1 = costBoth * n1;
            n2 -= n1;
            cout << t1 << endl;
            t1 += min(cost2 * n2, costBoth * n2);
            cout << t1 << endl;
        }
        t2 = 1LL*need1 * cost1 + 1LL*need2 * cost2;
        t2 = min(t1,t2);
        t3 = 1LL*max(need1, need2) * costBoth;
        t3 = min(t2,t3);
        cout << t2 << endl;
        return t3;
    }
};