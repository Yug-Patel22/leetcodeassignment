class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> um;
        um[0] = 1;  // base case
        int sum = 0, count = 0;

        for (int num : nums) {
            sum += num;
            count += um[sum - k]; // all previous prefix sums that match
            um[sum]++;
        }

        return count;
    }
};
