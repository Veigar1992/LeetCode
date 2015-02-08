class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
        vector<int> temp(n, 0);
        vector<vector<int> > res(n, temp);
        int maxnum=n*n, now=1;
        int init_row=0, init_col=1;
        while(1){
        	for (int i=init_row; i<n; ++i){
        		res[init_row][i]=now++;
        	}
        	if(now>maxnum) return res;
        	for (int i=init_col; i<n; ++i){
        		res[i][n-1]=now++;
        	}
        	if(now>maxnum) return res;
        	for (int i=n-2; i>=init_row; i--){
        		res[n-1][i]=now++;
        	}
        	if(now>maxnum) return res;
        	for (int i=n-2; i>=init_col; i--){
        		res[i][init_row]=now++;
        	}
        	if(now>maxnum) return res;
        	init_row++;
        	init_col++;
        	n--;
        }
    }
};