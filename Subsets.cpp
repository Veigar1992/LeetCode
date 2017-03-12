class Solution {
public:
    void findSubsets(vector<int> S, vector<int> &T, int n){
        if (n==1){
            for (int i=0; i<S.size(); ++i){
                vector<int> temp;
                temp.push_back(S[i]);
                T.push_back(temp);
            }
        }
        else{
            
        }
    }
    vector<vector<int> > subsets(vector<int> &S) {
        int num=1;
        sort(S.begin(), S.end());
        vector<vector<int> > res;
        vector<int> empty;
        res.push_back(empty);
        if (S.size()==0) return res;
        while(num<=S.size()){
            findSubsets(S, res, num);
            num++;
        }
        return res;
    }
};