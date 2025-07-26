class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1,el=nums[0];
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=el){
                el=nums[i];
                nums[k++]=nums[i];
            }
        }
        return k;
    }
};