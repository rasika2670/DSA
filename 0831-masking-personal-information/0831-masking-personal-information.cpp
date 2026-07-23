class Solution {
public:
    string maskPII(string s) {

        if (s.find('@') != string::npos) {
            for (char& c : s) {
                c = tolower(c);
            }

            int atPos = s.find('@');
            string name = s.substr(0,atPos);
            string domain = s.substr(atPos);
            string ans = string(1, name[0]) + "*****" + string(1, name.back()) + domain;
            return ans;
        }

        else{
            string digits = "";

            for (char& c : s) {
                if(isdigit(c)){
                    digits += c;
                }
            }

            string local = "***-***-" + digits.substr(digits.size() - 4);
            if(digits.size() == 10){
                return local;
            }
            else{
                return "+" + string(digits.size() - 10, '*') + "-" + local;
            }
        }
    }
};