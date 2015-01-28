class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        for (int i=0;i<=rowIndex;++i)
            res.push_back(1);
        if (rowIndex<=1) return res;
        for (int i=2;i<=rowIndex;++i){
            for (int j=i-2;j>=0;j--)
                res[j+1]=res[j+1]+res[j];
        }
        return res;
    }
};
