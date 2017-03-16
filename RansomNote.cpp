class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> m(26,0);
        for (char ch : magazine){
            m[ch-'a']++;
        }
        for (char ch : ransomNote){
            m[ch-'a']--;
            if (m[ch-'a'] < 0) return false;
        }
        return true;
    }
};
