#include <bitset>
class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<32> num1(x);
        bitset<32> num2(y);
        int count=0;
        for (int i=0;i<32;i++){
            if (num1[i] != num2[i]){
                count++;
            }
        }
        return count;
    }
};