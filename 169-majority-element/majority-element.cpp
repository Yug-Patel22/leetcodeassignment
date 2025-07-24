class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el=nums[0];
        int c=1;
        for(int i=1; i<nums.size(); i++){
            if(c==0){
                el=nums[i];
                c++;
            }
            else if(nums[i]==el)c++;
            else c--;
        }
        return el;
    }
};