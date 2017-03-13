class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0, r=nums.size();
        int mid=0;
        while(l<=r){
            mid = ((r-l)>>1)+l;
            //cout << "mid " << mid << endl;
            if (nums[mid] == target){
                return mid;
            }
            else if (nums[mid] > target){
                r=mid-1;
            }
            else if (nums[mid] < target){
                l=mid+1;
            }
        }
        //cout << "mid " << mid << endl;
        //cout << "rl " << r << ' ' << l << endl;
        if (mid < nums.size()){
            if (nums[mid] < target){
                mid += 1;
            }
        }
        return mid;
    }
};