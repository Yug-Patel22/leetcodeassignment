class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>v(nums.size());
        int l=0,r=nums.size()-1;
        int cp=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<pivot){
                v[l++]=nums[i];
            }
            if(nums[i]==pivot)cp++;
        }
        for(int i=nums.size()-1; i>=0; i--){
            if(nums[i]>pivot){
                v[r--]=nums[i];
            }
        }
        for(int i=0; i<cp; i++){
            v[l++]=pivot;
        }
        return v;
    }
};