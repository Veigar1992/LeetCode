class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > res;
        if (numRows<1) return res;
        vector<int> temp, temp2;
        temp.push_back(1);
        for (int i=1;i<=numRows;++i){
            temp2.push_back(1);
            for (int j=2;j<i;++j){
                temp2.push_back(temp[j-2]+temp[j-1]);
            }
            if (i>1)
                temp2.push_back(1);
            temp=temp2;
            res.push_back(temp2);
            temp2.clear();
        }
        return res;
    }
};
