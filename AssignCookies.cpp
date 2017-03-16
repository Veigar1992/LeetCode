class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        priority_queue<int> children;
        priority_queue<int> cookies;
        for (int n : g){
            children.push(n);
        }
        for (int n : s){
            cookies.push(n);
        }
        int res=0;
        while(!children.empty() && !cookies.empty()){
            int ch = children.top();
            children.pop();
            int co = cookies.top();
            cookies.pop();
            if (co >= ch){
                res++;
            }
            else{
                while(!children.empty()){
                    int ch2 = children.top();
                    children.pop();
                    if (co >= ch2){
                        res++;
                        break;
                    }
                }
            }
        }
        return res;
    }
};
