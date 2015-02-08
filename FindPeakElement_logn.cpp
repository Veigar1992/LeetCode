class Solution {
public:
    int findPeakElement(const vector<int> &num) {
        int l=0, r=num.size()-1, mid=0;
        while(l<r){
            mid = (l+r)/2;
            if (num[mid]<num[mid+1]) l=mid+1;
            else r=mid;
        }
        return l;
    }
};
