class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int dg=digits.size()-1;
        while(dg>=0){
            if ((digits[dg]=digits[dg]+1)<10){
                return digits;
            }
            digits[dg]=0;    
            dg--;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
