class Solution {
public:
    int findPeakElement(const vector<int> &num) {
        int max=num[0], index=0;
        for (int i=1; i<num.size(); ++i){
        	if (max<num[i]){
        		max=num[i];
        		index=i;
        	}
        }
        return index;
    }
};