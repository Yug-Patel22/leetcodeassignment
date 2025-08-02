class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long prefix=1,suffix=1,maxi=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            prefix*=nums[i];
            suffix*=nums[nums.size()-1-i];
            maxi=max(maxi,max(prefix,suffix));
            if(prefix==0)prefix=1;
            if(suffix==0)suffix=1;
        }
        return maxi;
    }
};