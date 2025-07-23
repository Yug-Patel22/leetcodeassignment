class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        auto it=max_element(nums.begin(),nums.end());
        int max1=*it;
        swap(nums[it-nums.begin()],nums[n-1]);
        it=max_element(nums.begin(),nums.end()-1);
        int max2=*it;
        swap(nums[it-nums.begin()],nums[n-2]);
        it=max_element(nums.begin(),nums.end()-2);
        int max3=*it;
        swap(nums[it-nums.begin()],nums[n-3]);
        it=min_element(nums.begin(),nums.end());
        int min1=*it;
        swap(nums[it-nums.begin()],nums[n-1]);
        it=min_element(nums.begin(),nums.end()-1);
        int min2=*it;
        return max(max1*max2*max3,min1*min2*max1);
    }
};