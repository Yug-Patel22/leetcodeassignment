class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        unordered_map<int,int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        int ans;
        for(auto i : m){
            if(i.second==1) ans=i.first;
        }
        return ans;
    }
};