class Solution {
public:
    void sortColors(int A[], int n) {
        int count0=0, count1=0, count2=0; 
        int *R, *W, *B;
        R = (int *)malloc(sizeof(int)*n);
        W = (int *)malloc(sizeof(int)*n);
        B = (int *)malloc(sizeof(int)*n);
        memset(R, 0, sizeof(int)*n);
        memset(W, 0, sizeof(int)*n);
        memset(B, 0, sizeof(int)*n);
        for (int i=0; i<n; ++i){
        	if (A[i]==0) R[count0++]=A[i];
        	else if (A[i]==1) W[count1++]=A[i];
        	else B[count2++]=A[i];
        }
        for (int i=0; i<n; ++i){
        	if (i<count0) A[i]=R[i];
        	else if (i>=count0 && i<count1+count0) A[i]=W[i-count0];
        	else A[i]=B[i-count0-count1];
        }
    }
};