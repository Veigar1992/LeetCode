bool sortTS(pair<int, int> p1, pair<int, int> p2){
    return p1.first < p2.first;
}
class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int end = numbers.size()-1;
        int start = 0;
        vector<pair<int, int>> cloue_num;
        for (int i=0; i<numbers.size();++i){
            pair<int, int> p(numbers[i], i);
            cloue_num.push_back(p);
        }
        sort(cloue_num.begin(),cloue_num.end(),sortTS);
        while(start < end){
            int temp = cloue_num[start].first+cloue_num[end].first;
            if (temp < target) start++;
            else if (temp > target) end--;
            else break;
        }
        int num1=cloue_num[start].second, num2=cloue_num[end].second;
        if (num1 > num2){
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        vector<int> res;
        res.push_back(num1+1);
        res.push_back(num2+1);
        return res;
    }
};