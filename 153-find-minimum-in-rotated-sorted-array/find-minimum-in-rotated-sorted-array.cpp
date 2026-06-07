class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1,mini=INT_MAX;
        while(l<=r){
            int mid=l+((r-l)/2);
            mini=min(mini,nums[mid]);
            if(nums[r]>=nums[mid])r=mid-1;
            else{
                l=mid+1;
            }
        }
        return mini;
    }
};