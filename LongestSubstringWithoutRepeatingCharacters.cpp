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