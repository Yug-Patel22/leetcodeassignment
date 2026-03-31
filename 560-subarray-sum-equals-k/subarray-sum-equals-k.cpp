class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int s=0,c=0;
        unordered_map<int,int>um;
        um[0]=1;
        for(int i=0; i<nums.size(); i++){
            s+=nums[i];
            c+=um[s-k];
            um[s]++;
        }
        return c;
    }
};