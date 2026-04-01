class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        int mini=INT_MAX;
        while(l<=r){
            int mid=(l+r)/2;
            mini=min(mini,nums[mid]);
            if(nums[r]>=nums[mid])r=mid-1;
            else if(nums[mid]>=nums[l]){
                mini=min(nums[l],mini);
                l=mid+1;
            }
        }
        return mini;
    }
};