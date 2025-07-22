class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> um;
        for(int i=0; i<nums.size(); i++){
            um[nums[i]]++;
        }
        for(auto p:um){
            if(p.second==1)return p.first;
        }
        return -1;
    }
};