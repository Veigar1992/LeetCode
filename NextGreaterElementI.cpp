class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        int len1=findNums.size(), len2=nums.size();
        vector<int> res;
        bool fg = false;
        for (int i=0;i<len1;i++){
            int curr = findNums[i];
            for (int j=0;j<len2;j++){
                if (curr == nums[j]){
                    while(j<len2){
                        if (curr < nums[j]){
                            res.push_back(nums[j]);
                            fg = true;
                            break;
                        }
                        j++;
                    }
                    if (!fg){
                        res.push_back(-1);
                    }
                    fg = false;
                    break;
                }
            }
        }
        return res;
    }
};