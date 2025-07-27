class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0,c1=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0)c0++;
            else if(nums[i]==1)c1++;
        }
        int i=0;
        while(i<c0){
            nums[i++]=0;
        }
        while(i<c0+c1){
            nums[i++]=1;
        }
        while(i<nums.size()){
            nums[i++]=2;
        }
    }
};