//my home code
class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int i=0,j=n-1;
        while(true){
            int x=i,y=j;
            vector<int>v;
            while(i<n && j<n){
                
                v.push_back(grid[i][j]);
                i++;
                j++;
            }
            sort(v.begin(),v.end());
            int k;
            if(j==0)k=v.size()-1;
            else k=0;
            i=x,j=y;
            if (y == 0) {
                // descending order for first-column diagonals
                for (int t = v.size() - 1; t >= 0; t--) {
                grid[i][j] = v[t];
                i++; j++;
            }
            } else {
                // ascending order for top-row diagonals
                for (int t = 0; t < (int)v.size(); t++) {
                    grid[i][j] = v[t];
                    i++; j++;
                }
            }


            if(y==0){
                i=x+1;
                j=y;
            }
            else{
                j=y-1;
                i=x;
            }
            if(i>=n)break;
        }
        return grid;
    }
};