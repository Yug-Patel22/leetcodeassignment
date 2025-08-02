class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        if(mat.empty())return {};
        int i=0,j=0;
        int m=mat.size(),n=mat[0].size();
        vector<int>v;
        bool down=false;
        for(int k=0; k<m*n; k++){
            if(down){
                v.push_back(mat[i][j]);
                if(j-1<0 || i+1>=m){
                    down=false;
                    if(j-1<0 && i+1>=m)j++;
                    else if(j-1<0)i++;
                    else j++;
                }
                else{
                    j--;
                    i++;
                }
            }
            else{
                v.push_back(mat[i][j]);
                if(j+1>=n || i-1<0){
                    down=true;
                    if(j+1>=n && i-1<0){
                        i++;
                    }
                    else if(j+1>=n)i++;
                    else j++;
                }
                else{
                    i--;
                    j++;
                }
            }
        }
        return v;
    }
};