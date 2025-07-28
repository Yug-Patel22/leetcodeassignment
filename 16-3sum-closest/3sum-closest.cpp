class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int mini=INT_MAX;
        int ans;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n-2; i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            int l=i+1,r=n-1;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if (sum == target) return sum;
                if(abs(target-sum)<mini){
                    mini=abs(target-sum);
                    ans=sum;
                }
                if(sum<target)l++;
                else r--;
            }
        }
        return ans;
    }
};