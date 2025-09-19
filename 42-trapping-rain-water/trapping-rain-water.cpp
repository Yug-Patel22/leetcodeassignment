class Solution {
public:
    int trap(vector<int>& height) {
        int l_max=0,r_max=0,ans=0;
        int l=0,r=height.size()-1;
        while(l<r){
            if(height[l]<=height[r]){
                if(l_max>height[l]) ans+=l_max-height[l];

                else l_max=height[l];
                l++;
            }
            else{
                if(r_max>height[r]) ans+=r_max-height[r];

                else r_max=height[r];
                r--;
            }
        }
        return ans;
    }
};