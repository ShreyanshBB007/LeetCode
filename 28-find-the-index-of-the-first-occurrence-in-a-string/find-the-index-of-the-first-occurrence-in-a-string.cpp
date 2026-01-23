#define ll unsigned long long
#define mod 1000000007
class Solution {
public:
ll base;

    ll expo(ll a, ll b ) {
        if ( b == 0 ) return 1;
        ll half = expo(a, b/2);
        if ( b & 1 ) return (half % mod * half % mod * a) % mod;
        else return half * half % mod ;
    }

    ll calHash(string &s, int j) {
        ll hash = 0;
        for ( int i=0; i<=j; i++ ) {
            hash = (hash * base + (s[i] - 'a')) % mod ; 
        }
        return hash;
    }

    int strStr(string s, string t) {
        int m = s.size(), n = t.size();
        base = 11;
        ll thash = calHash(t, n-1);

        ll shash = calHash(s, n-1);
        for ( int i=0; i<=m-n; i++ ) {
            if ( thash == shash ) return i;
            shash = (shash - (( (s[i] - 'a') * expo(base, n-1) ) % mod ) + mod) % mod ;
            shash = (shash * base + (s[i+n] - 'a') ) % mod ;
        }
        return -1;
    }
};