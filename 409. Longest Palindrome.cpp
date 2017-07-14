class Solution {
public:
    int longestPalindrome(string s) {
        int lower[26]={0};
        int upper[26]={0};
        bool fg = false;
        int res=0;
        for (int i=0;i<s.size();i++){
            if (s[i] >= 'A' && s[i]<='Z'){
                upper[s[i]-'A']+=1;
            }
            if (s[i] >= 'a' && s[i]<='z'){
                lower[s[i]-'a']+=1;
            }
        }
        for (int i=0;i<26;i++){
            res += lower[i] / 2 * 2;
            res += upper[i] / 2 * 2;
            if (lower[i]%2==1 || upper[i]%2==1) fg=true;
        }
        if (fg)
            return res+1;
        return res;
    }
};
