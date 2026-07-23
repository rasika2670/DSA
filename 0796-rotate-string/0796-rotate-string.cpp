class Solution {
public:
    bool rotateString(string s, string goal) {
        
        s += s;
        int n = s.length();

        for(int i=0 ; i<=n/2 ; i++){

            if(goal == s.substr(i, n/2)){
                return true;
            }
        }
        return false;
    }
};