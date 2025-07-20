class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n,1);
        int mul=1;
        for(int i=0; i<n; i++){
            v[i]*=mul;
            mul*=nums[i];
        }
        mul=1;
        for(int i=n-1; i>=0; i--){
            v[i]*=mul;
            mul*=nums[i];
        }
        return v;
    }
};