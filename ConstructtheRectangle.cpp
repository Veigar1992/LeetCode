class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> myVec;
        int n = sqrt(area);
        for (int i=n;i>=1;i--){
            if (area%i==0){
                myVec.push_back(area/i);
                myVec.push_back(i);
                break;
            }
        }
        return myVec;
    }
};
