#include<unordered_map>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = s.size();
        int maxnum = 0, count=0, begin=0;
        char ch = ',';
        unordered_map<char, int> myMap;
        for (int i=0;i<length;i++){
            ch = s[i];
            if (myMap.find(ch) == myMap.end()){
                count++;
            }
            else{
                if (myMap[ch] > begin){
                    begin = myMap[ch];
                    if (maxnum<count){
                        maxnum = count;
                    }
                }
                else{
                    count++;
                }
                count = i - begin ;
            }
            myMap[ch] = i;
            
        }
        return count > maxnum ? count : maxnum;
    }
};
/*
#include<unordered_map>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        for (int i = 0; i != s.length(); i++) {
            if (dict[s[i]] > start)
                start = dict[s[i]];
            dict[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }
};
*/
