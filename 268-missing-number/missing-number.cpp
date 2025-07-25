class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        long long a=accumulate(nums.begin(),nums.end(),0);
        long long b=1LL*n*(n+1)/2;
        int ans=b-a;
        return ans;
    }
};