class Solution {
public:
    bool canJump(int A[], int n) {
    	if (n<=1) return true;
    	vector<int> temp(n, 0);
    	for (int i=n-2; i>=0; i--){
    		if (i<n-2 && A[i]-A[i+1]==1){
    			temp[i]=temp[i+1];
    			continue;
    		}
    		if (A[i]+i>=n-1){
    			temp[i]=1;
    		}
    		else{
    			for (int j=A[i]+i; j>i; j--){
    				if (temp[j]==1){
    					temp[i]=1;
    					break;
    				}
    			}
    		}
    	}
    	if (temp[0]==1) return true;
    	else return false;
    }
};
