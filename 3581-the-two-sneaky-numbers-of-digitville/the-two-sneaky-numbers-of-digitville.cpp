class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_set<int>us;
        vector<int>v;
        for(int i=0; i<nums.size(); i++){
            if(us.count(nums[i]))v.push_back(nums[i]);
            else us.insert(nums[i]);
        }
        return v;
    }
};