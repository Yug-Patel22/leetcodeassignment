class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size(),n=mat[0].size();
        if(m*n!=r*c)return mat;
        vector<vector<int>>v(r,vector<int>(c));
        int x=0,y=0;
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[0].size(); j++){
                if(y==c){
                    x++;
                    y=0;
                }
                v[x][y++]=mat[i][j];
            }
        }
        return v;
    }
};