class Solution {
public:
    int countHillValley(vector<int>& nums) {
        if(nums.size()<3)return 0;
        int c=0,i=1;
        while(i<nums.size()-1){
            int l=i-1;
            while(l>=0 && nums[l]==nums[i])l--;
            int r=i+1;
            while(r<nums.size() && nums[i]==nums[r])r++;
            if(l>=0 && r<nums.size()){
                if(nums[i]>nums[l] && nums[i]>nums[r] || nums[i]<nums[l] && nums[i]<nums[r])c++;
            }
            i=r;
        }
        return c;
    }
};