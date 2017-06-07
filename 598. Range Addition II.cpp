class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int min_m = m, min_n=n;
        for (int i=0;i<ops.size();i++){
            min_m = ops[i][0] < min_m ? ops[i][0] : min_m;
            min_n = ops[i][1] < min_n ? ops[i][1] : min_n;
        }
        return min_m * min_n;
    }
};
