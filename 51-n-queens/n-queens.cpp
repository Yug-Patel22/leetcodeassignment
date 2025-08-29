class Solution {
public:
    bool issafe(vector<string>&v,int row,int col,int n){
        for(int i=0; i<n; i++){
            if(v[i][col]=='Q') return false;
        }
        for(int i=row, j=col; i>=0 && j>=0 ; i--,j--){
            if(v[i][j]=='Q') return false;
        }
        for(int i=row, j=col; i>=0 && j<n ; i--,j++){
            if(v[i][j]=='Q') return false;
        }
        return true;
    }
    void nq(vector<vector<string>> & ans,int row,int n,vector<string> & v){
        if(row==n){
            ans.push_back(v);
            return;
        }
        for(int i=0; i<n; i++){
            if(issafe(v,row,i,n)){
                v[row][i]='Q';
                nq(ans,row+1,n,v);
                v[row][i]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> v(n,string(n,'.'));
        int row=0;
        nq(ans,row,n,v);
        return ans;
    }
};