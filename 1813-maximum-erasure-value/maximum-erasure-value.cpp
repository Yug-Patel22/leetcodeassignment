class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> s;
        int sum=nums[0],maxi=INT_MIN;
        int c=0;
        s.insert(nums[0]);
        for(int i=1; i<nums.size(); i++){
            if(s.find(nums[i])!=s.end()){
                maxi=max(maxi,sum);
                while(s.find(nums[i])!=s.end()){
                    s.erase(nums[c]);
                    sum-=nums[c];
                    c++;
                }
            }
            s.insert(nums[i]);
            sum+=nums[i];
        }
        maxi=max(maxi,sum);
        return maxi;
    }
};