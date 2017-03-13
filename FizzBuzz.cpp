class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> myVec;
        for (int i=1;i<=n;i++){
            if (i%3==0 && i%5==0){
                myVec.push_back("FizzBuzz");
            }
            else if (i%3==0 && i%5!=0){
                myVec.push_back("Fizz");
            }
            else if (i%3!=0 && i%5==0){
                myVec.push_back("Buzz");
            }
            else{
                myVec.push_back(to_string(i));
            }
        }
        return myVec;
    }
};