class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int rs=0;
        for (auto &p : points){
            unordered_map<double, int> myMap;
            for (auto &q : points){
                rs += 2*myMap[hypot(p.first-q.first, p.second-q.second)]++;
            }
        }
        return rs;
    }
};
