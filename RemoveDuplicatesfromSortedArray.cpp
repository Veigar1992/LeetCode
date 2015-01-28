class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        int idx=1;
        int temp=A[0];
        for (int i=1;i<n;++i){
            if(A[i]!=temp){
                temp=A[i];
                A[idx++]=temp;
            }
        }
        return idx;
    }
};
