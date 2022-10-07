class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows_size=matrix.size();
        int cols_size=matrix[0].size();
        int count=1;
        for(int i=0; i < rows_size ; i++){
            if(matrix[i][0]==0){
                count=0;
            }
            for(int j=1; j < cols_size; j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=rows_size-1; i >= 0; i--){
            for(int j=cols_size-1; j >= 1; j--){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
            if(count==0){
                matrix[i][0]=0;
            }
        }
    }
};
