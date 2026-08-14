class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, int> mp;

        int n = s.length();

        int maxLen = 0;

        int j=0;
        int i=0;

        while(j<n){

            mp[s[j]]++;

            while(mp[s[j]] > 2){
                mp[s[i]]--;
                i++;
            }

            maxLen = max(maxLen, j-i+1);
            j++;
        }

        return maxLen;
    }
};