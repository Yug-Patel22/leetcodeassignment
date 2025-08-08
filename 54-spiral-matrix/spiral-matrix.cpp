class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(); 
        int n=matrix[0].size();
        int l=0,top=0,r=n-1,bot=m-1;
        vector<int> v;
        while(l<=r && top<=bot){
            for(int i=l; i<=r; i++){
                v.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top; i<=bot; i++){
                v.push_back(matrix[i][r]);
            }
            r--;
            if(top<=bot){
                for(int i=r; i>=l; i--){
                    v.push_back(matrix[bot][i]);
                }
            }
            bot--;
            if(l<=r){
                for(int i=bot; i>=top; i--){
                    v.push_back(matrix[i][l]);
                }
            }
            l++;;
        }
        return v;
    }
};