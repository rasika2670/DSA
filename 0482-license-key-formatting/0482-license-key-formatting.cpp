class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int count = 0;
        string ans = "";
        reverse(s.begin(), s.end());

        for (char c : s) {
            if (c == '-') {
                continue;
            }

            if (count == k) {
                ans += '-';
                count = 0;
            }
            
            ans += toupper(c);
            count++;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};