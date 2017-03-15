#include <unordered_set>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> mySet;
        for (int n : nums){
            if (mySet.find(n) == mySet.end()){
                mySet.insert(n);
            }
            else{
                mySet.erase(n);
            }
        }
        return *mySet.begin();
    }
};
