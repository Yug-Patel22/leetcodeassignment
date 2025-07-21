class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxi=-1;
        vector<int>v(2,0);
        for(int i=0; i<mat.size(); i++){
            int c=0;
            for(int j=0; j<mat[0].size(); j++){
                if(mat[i][j]==1)c++;
            }
            if(maxi<c){
                maxi=c;
                v[0]=i;
                v[1]=maxi;
            }
        }
        return v;
    }
};