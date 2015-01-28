class Solution {
public:
    int majorityElement(vector<int> &num) {
        int curValue = num[0];
        int count = 1;
        for (int i=1; i<num.size(); ++i){
            if (curValue == num[i]) count++;
            else{
                count--;
                if (count<0){
                    curValue = num[i];  
                    count = 1;
                } 
                
            }
        }
        return curValue;
    }
};
