class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p=0; int n=0;
        while(n<nums.size() && nums[n]>=0){
            n++;
        }
        while(p<nums.size() && nums[p]<=0){
            p++;
        }
        vector<int>v;
        bool pos=true;
        for(int i=0; i<nums.size(); i++){
            if(pos){
                v.push_back(nums[p]);
                p++;
                while(p<nums.size() && nums[p]<=0){
                    p++;
                }
            }
            else{
                v.push_back(nums[n]);
                n++;
                while(n<nums.size() && nums[n]>=0){
                    n++;
                }
            }
            pos=!pos;
        }
        return v;
    }
};