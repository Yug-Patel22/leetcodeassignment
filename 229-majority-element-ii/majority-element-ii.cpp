class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if(nums.size()==1)return {nums[0]};
        int el1,el2,c1=0,c2=0;
        for(int i=0; i<nums.size(); i++){
            if(el1==nums[i])c1++;
            else if(el2==nums[i])c2++;
            else if(c1==0){
                el1=nums[i];
                c1++;
            }
            else if(c2==0){
                el2=nums[i];
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        vector<int>v;
        c1=c2=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==el1)c1++;
            else if(nums[i]==el2)c2++;
        }
        if(c1>nums.size()/3)v.push_back(el1);
        if(c2>nums.size()/3)v.push_back(el2);
        return v;
    }
};