class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,vector<int>>um;
        for(int i=0; i<nums.size(); i++){
            if(um.find(nums[i])==um.end()){
                um[nums[i]]={1,i,i};
            }
            else{
                um[nums[i]][0]++;
                um[nums[i]][2]=i;
            }
        }
        int maxi=-1;
        int mini=INT_MAX;
        for(auto p:um){
            int len=p.second[2]-p.second[1]+1;
            if(p.second[0]>maxi){
                maxi=p.second[0];
                mini=len;
            }
            else if(p.second[0]==maxi){
                if(mini>len)mini=len;
            }
        }
        return mini;
    }
};