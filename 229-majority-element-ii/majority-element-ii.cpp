class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return {nums[0]};
        int el1,el2,c1=0,c2=0;
        for(int i=0; i<n; i++){
            if(el1==nums[i])c1++;
            else if(nums[i]==el2)c2++;
            else if(c1==0){
                el1=nums[i];
                c1=1;
            }
            else if(c2==0){
                el2=nums[i];
                c2=1;
            }
            else {
                c1--;
                c2--;
            }
        } 
        c1=c2=0;
        for(int i=0; i<n; i++){
            if(nums[i]==el1)c1++;
            else if(nums[i]==el2)c2++;
        }
        vector<int>v;
        if(c1>n/3)v.push_back(el1);
        if(c2>n/3)v.push_back(el2);
        return v;  
    }
};