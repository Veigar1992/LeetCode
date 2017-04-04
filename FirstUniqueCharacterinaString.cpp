class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> myV(26,0);
        vector<int> myInd(26,0);
        int minInd=10000000;
        bool fg = false;
        for (int i=0;i<s.size();i++){
            int ch = s[i]-'a';
            if (myV[ch]==0){
                myInd[ch] = i;
            }
            myV[ch] ++;
        }
        for (int i=0;i<26;i++){
            if (myV[i] == 1){
                minInd = min(myInd[i], minInd);
                fg = true;
            }
        }
        if (!fg){
            minInd = -1;
        }
        return minInd;
    }
};
