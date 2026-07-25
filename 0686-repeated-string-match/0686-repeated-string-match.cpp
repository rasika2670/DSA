class Solution {
public:
    bool isSubstr(string a, string b) {

        int n = a.length();
        int len = b.length();

        for (int i = 0; i <= n - len; i++) {
            if (a.substr(i, len) == b) {
                return true;
            }
        }
        return false;
    }

    int repeatedStringMatch(string a, string b) {

        int count = 1;

        string temp = a;

            while (a.length() < b.length()) {
            a += temp;
            count++;
        }

        if (isSubstr(a, b))
            return count;

        a += temp;
        count++;

        if (isSubstr(a, b))
            return count;

        return -1;
    }
};