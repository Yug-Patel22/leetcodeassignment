class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int j=0,k=mat[0].size()-1,sum=0;
        for(int i=0; i<mat.size(); i++){
            if(j!=k)sum+=mat[i][j]+mat[i][k];
            else sum+=mat[i][j];
            k--;
            j++;
        }
        return sum;
    }
};