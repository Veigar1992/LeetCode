class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<string> myVec(nums.size(),"");
        priority_queue<pair<int, int>> myPQ;
        for (int i=0;i<nums.size();i++){
            myPQ.push(make_pair(nums[i], i));
        }
        for (int i=0;i<nums.size();i++){
            if (i==0) myVec[myPQ.top().second]="Gold Medal";
            if (i==1) myVec[myPQ.top().second]="Silver Medal";
            if (i==2) myVec[myPQ.top().second]="Bronze Medal";
            if (i>2) myVec[myPQ.top().second]=to_string(i+1);
            myPQ.pop();
        }
        return myVec;
    }
};
