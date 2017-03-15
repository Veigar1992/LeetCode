class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, maxnum = 0;
        for (int n=0;n<nums.size();n++){
            if (nums[n] == 1){
                count++;
            }
            else{
                if (maxnum < count){
                    maxnum = count;
                }
                count = 0;
            }
        }
        if (maxnum < count){
            maxnum = count;
            count = 0;
        }
        return maxnum;
    }
};
