class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> myMap;
        
        for (int i=0;i<nums.size();i++){
            if (myMap.find(nums[i]) == myMap.end()){
                myMap[nums[i]] = 0;
            }
            myMap[nums[i]] ++;
        }
        int res = 0, maxnum = 0;
        for (unordered_map<int, int>::iterator it=myMap.begin(); it!=myMap.end();it++){
            if (it->second > maxnum){
                res = it->first;
                maxnum = it->second;
            }
        }
        return res;
    }
};
