class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++){
            unordered_set<char> s;
            for(int j=0; j<9; j++){
                if(board[i][j]!='.'){
                    if(s.find(board[i][j])!=s.end())return false;
                    else s.insert(board[i][j]);
                }
            }
        }
        for(int i=0; i<9; i++){
            unordered_set<char> s;
            for(int j=0; j<9; j++){
                if(board[j][i]!='.'){
                    if(s.find(board[j][i])!=s.end())return false;
                    else s.insert(board[j][i]);
                }
            }
        }
        int row=0,col=0;
        for(int k=0; k<9; k++){
            unordered_set<char>s;
            for(int i=row; i<row+3; i++){
                for(int j=col; j<col+3; j++){
                    if(board[i][j]!='.'){
                        if(s.find(board[i][j])!=s.end())return false;
                        else s.insert(board[i][j]);
                    }
                }
            }
            if(col+3>8){
                row+=3;
                col=0;
            }
            else col+=3;
        }
        return true;
    }
};