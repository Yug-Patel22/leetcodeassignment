class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int sind=-1,eind=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                sind=mid;
                r=mid-1;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        l=0,r=nums.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                eind=mid;
                l=mid+1;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return {sind,eind};
    }
};