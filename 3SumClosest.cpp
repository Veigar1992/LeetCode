class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        int min = 10000000, ans = 0;
        for(int i=0;i<num.size();++i){
            for (int j=i+1;j<num.size();++j){
                for (int k=j+1;k<num.size();++k){
                    int s = abs(num[i]+num[j]+num[k]-target);
                    if (s<min){
                        min = s;
                        ans = num[i]+num[j]+num[k];
                    }
                    if (s == 0) return target;
                }
            }
        }
        return ans;
    }
};
