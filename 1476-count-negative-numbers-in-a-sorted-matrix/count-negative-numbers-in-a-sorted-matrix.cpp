class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),count=0;
        for(int i=0; i<m; i++){
            if(grid[i][n-1]<0){
                int l=0,r=n-1,ind=-1;
                while(l<=r){
                    int mid=(l+r)/2;
                    if(grid[i][mid]<0){
                        ind=mid;
                        r=mid-1;
                    }
                    else l=mid+1;
                }
                if(ind!=-1)count+=n-ind;
            }
        }
        return count;
    }
};