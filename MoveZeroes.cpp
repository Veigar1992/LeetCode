#include <queue>
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        queue<int> myQ;
        for (int i=0;i<nums.size();i++){
            if (nums[i] == 0){
                myQ.push(i);
            }
            else{
                if (myQ.size()==0) continue;
                int index = myQ.front();
                swap(nums[i], nums[index]);
                myQ.pop();
                myQ.push(i);
            }
        }
    }
};
