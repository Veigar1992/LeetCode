class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> mySet;
        for (int i=0;i<nums.size();i++){
            mySet.insert(nums[i]);
        }
        if (mySet.size() == nums.size()){
            return false;
        }
        return true;
    }
};
