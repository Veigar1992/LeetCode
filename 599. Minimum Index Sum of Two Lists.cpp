class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> myMap1;
        unordered_map<string, int> myMap2;
        set<string> mySet;
        for (int i=0;i<list1.size();i++){
            myMap1[list1[i]] = i;
            mySet.insert(list1[i]);
        }
        for (int i=0;i<list2.size();i++){
            myMap2[list2[i]] = i;
            mySet.insert(list2[i]);
        }
        int res=1000000;
        unordered_map<int, vector<string>> myVec;
        for (set<string>::iterator iter=mySet.begin(); iter!=mySet.end();iter++){
            // int ind1=-1, ind2=-1;
            string tmp = *iter;
            if (myMap1.find(tmp) == myMap1.end() || myMap2.find(tmp) == myMap1.end()) continue;
            res = (myMap1[tmp] + myMap2[tmp]) < res ? (myMap1[tmp] + myMap2[tmp]) : res;
            // if (myVec.find(res) == myVec.end()){
                // myVec[res] = vector<string>(tmp);
            //     myVec[res].push_back(tmp);
            // }
            // else{
            myVec[myMap1[tmp] + myMap2[tmp]].push_back(tmp);
            // }
        }
        return myVec[res];
    }
};
