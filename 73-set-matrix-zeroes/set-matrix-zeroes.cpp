class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col00=1;
        int m=matrix.size(),n=matrix[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    if(j==0)col00=0;
                    else matrix[0][j]=0;
                }
            }
        }
        for(int i=m-1; i>=1; i--){
            for(int j=n-1; j>=1; j--){
                if(matrix[i][0]==0 || matrix[0][j]==0)matrix[i][j]=0;
            }
        }
        if(matrix[0][0]==0){
            for(int i=0; i<n; i++){
                matrix[0][i]=0;
            }
        }
        if(col00==0){
            for(int i=0; i<m; i++){
                matrix[i][0]=0;
            }
        }
    }
};