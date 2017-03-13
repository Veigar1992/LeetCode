#include <hash_set>
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> myVec;
        char r1[10] = {'q','w','e','r','t','y','u','i','o','p'};
        //cout << r1 << endl;
        unordered_set<char> row1 {'q','w','e','r','t','y','u','i','o','p'};
        char r2[9] = {'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> row2{'a','s','d','f','g','h','j','k','l'};
        char r3[7] = {'z','x','c','v','b','n','m'};
        unordered_set<char> row3{'z','x','c','v','b','n','m'};
        for (int i=0;i<words.size();i++){
            string str = words[i];
            int k1=0,k2=0,k3=0;
            for (int j=0;j<str.size();j++){
                char ch = str[j];
                if (ch >= 'A' && ch <= 'Z'){
                    ch = char(ch-'A'+'a');
                }
                if (row1.find(ch) != row1.end()){
                    k1 = 1;
                }
                if (row2.find(ch) != row2.end()){
                    k2 = 1;
                }
                if (row3.find(ch) != row3.end()){
                    k3 = 1;
                }
            }
            if (k1+k2+k3 == 1){
                myVec.push_back(str);
            }
        }
        return myVec;
    }
};