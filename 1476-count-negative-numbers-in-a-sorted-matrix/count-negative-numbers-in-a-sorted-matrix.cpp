class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int r=grid.size()-1,c=0;
        int count=0;
        while(r>=0 && c<grid[0].size()){
            while(c<grid[0].size() && grid[r][c]>=0){
                c++;
            }
            if(c<grid[0].size() && grid[r][c]<0)count+=grid[0].size()-c;
            r--;
        }
        return count;
    }
};