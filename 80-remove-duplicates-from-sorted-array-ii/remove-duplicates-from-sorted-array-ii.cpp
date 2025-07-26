class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1,el=nums[0],c=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==el && c<2){
                nums[k++]=nums[i];
                c++;
            }
            else if(nums[i]!=el){
                el=nums[i];
                nums[k++]=nums[i];
                c=1;
            }
        }
        return k;
    }
};