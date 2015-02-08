class Solution {
public:
    vector<int> spiralOrder(vector<vector<int> > &matrix) {
        vector<int> res;
        if (matrix.empty()) return res;
        int col=matrix[0].size(), row=matrix.size();
        int init_row=0, init_col=1;
        while(init_row<row && init_col<=col){
        	for (int i=init_row; i<col; ++i){
        		res.push_back(matrix[init_row][i]);
        	}
        	if (init_col<row){
        		for (int i=init_col; i<row; ++i){
        			res.push_back(matrix[i][col-1]);
        		}
        		for (int i=col-2; i>=init_row; i--){
        			res.push_back(matrix[row-1][i]);
        		}
        		if (init_row<col-1){
        			for (int i=row-2; i>=init_col; i--){
        				res.push_back(matrix[i][init_row]);
        			}
        		}
        	}
        	init_row++;
        	init_col++;
        	col--;
        	row--;
    	}
    	return res;
    }
};