class Solution {
public:
    bool detectCapitalUse(string word) {
        int len = word.size();
        if (len==1) return true;
        if (word[0] >= 'A' && word[0] <= 'Z'){
            if (word[1] >= 'A' && word[1] <= 'Z'){
                for (int i=2;i<len;i++){
                    if (word[i] >= 'A' && word[i] <= 'Z') continue;
                    else return false;
                }
                return true;
            }
            else{
                for (int i=2;i<len;i++){
                    if (word[i] >= 'a' && word[i] <= 'z') continue;
                    else return false;
                }
                return true;
            }
        }
        else{
            for (int i=1;i<len;i++){
                if (word[i] >= 'a' && word[i] <= 'z') continue;
                else return false;
            }
            return true;
        }
    }
};
