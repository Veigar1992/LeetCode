class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_nums[26] = {0};
        int t_nums[26] = {0};
        if (s.size() != t.size()){
            return false;
        }
        for (int i=0;i<s.size();i++){
            s_nums[s[i] - 'a'] ++;
            t_nums[t[i] - 'a'] ++;
        }
        for (int i=0;i<26;i++){
            if (s_nums[i] != t_nums[i]){
                return false;
            }
        }
        return true;
    }
};
