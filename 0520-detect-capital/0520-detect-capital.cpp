class Solution {
public:
    bool detectCapitalUse(string word) {

        bool allUpper = true;
        bool allLower = true;
        bool firstUpperRestLower = true;
        
        for(char c : word){
            if(!isupper(c)){
                allUpper = false;
            }

            if(!islower(c)){
                allLower = false;
            }
        }

        if(islower(word[0])) firstUpperRestLower = false;

        for(int i=1 ; i<word.length() ; i++){
            if(isupper(word[i])){
                firstUpperRestLower = false;
                break;
            }
        }

        return allUpper || allLower || firstUpperRestLower;
    }
};