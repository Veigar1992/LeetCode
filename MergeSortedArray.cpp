class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        if (m==0 || n==0){
            memcpy(A, B, sizeof(int)*n);
            return;
        }
        int *temp;
        temp=(int *)malloc(sizeof(int)*m);
        memset(temp, 0, sizeof(int)*m);
        for (int i=0;i<m;++i){
            temp[i]=A[i];
        }
        int a_idx=0, b_idx=0;
        for (int i=0;i<n+m;++i){
            while(true){
                if (a_idx==m){
                    A[i]=B[b_idx++];
                    break;
                }
                if (b_idx==n){
                    A[i]=temp[a_idx++];
                    break;
                }
                if (temp[a_idx] < B[b_idx]){
                    A[i]=temp[a_idx++];
                    break;
                }
                else{
                    A[i]=B[b_idx++]; 
                    break;
                }
            }
        }
    }
};
