class Solution {
public:
    bool check(vector<int>& nums) {
        int maxi=-1;
        bool flow=true;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i+1]<nums[i] && flow){
                maxi=nums[i];
                flow=false;
            }
            else if(nums[i+1]<nums[i] && !flow)return false;
            else if(!flow && nums[i]>maxi)return false;
            else if(!flow && nums[i]==maxi && nums[i+1]<maxi)return false;
        }
        if(!flow && nums[nums.size()-1]>maxi || !flow && nums[0]<nums[nums.size()-1])return false;
        else if(!flow && nums[nums.size()-1]==maxi && nums[0]<maxi)return false;
        return true;
    }
};