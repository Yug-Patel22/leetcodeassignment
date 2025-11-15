class Solution {
public:
    bool canJump(vector<int>& nums) {
        // int target=nums.size()-1;
        // for(int i=nums.size()-2; i>=0; i--){
        //     if(i+nums[i]>=target)target=i;
        // }
        // if(target==0)return true;
        // return false;
        int maxi=0;
        for(int i=0; i<nums.size(); i++){
            if(i>maxi)return false;
            maxi=max(maxi,i+nums[i]);
        }
        return true;
    }
};