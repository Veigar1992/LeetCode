class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> mySet;
        unordered_set<int> mySet2;
        for (int n : nums1){
            mySet.insert(n);
        }
        for (int n : nums2){
            if (mySet.count(n) > 0){
                mySet2.insert(n);
            }
        }
        vector<int> res;
        for (auto i : mySet2){
            res.push_back(i);
        }
        return res;
    }
};
