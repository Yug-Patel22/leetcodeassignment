class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>um;
        for(int i=0; i<nums.size(); i++){
            um[nums[i]]++;
        }
        int maxi=um[nums[0]];
        int ele=nums[0];
        for(auto p:um){
            if(p.second>maxi){
                maxi=p.second;
                ele=p.first;
            }
        }
        return ele;
    }
};