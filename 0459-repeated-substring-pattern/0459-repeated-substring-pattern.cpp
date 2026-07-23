class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        int n = s.length();

        for (int len = 1; len <= n / 2; len++) {
            if (n % len != 0) {
                continue;
            }

            string sub = s.substr(0, len);

            bool ok = true;

            for (int i = len; i < n; i += len) {
                if (sub != s.substr(i, len)) {
                    ok = false;
                    break;
                }
            }

            if (ok) {
                return true;
            }
        }
        
        return false;
    }
};