class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen=0;
        int c=0;
        int zeros=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                zeros++;
                if(zeros>k){
                    while(zeros>k){
                        if(nums[c]==0)zeros--;
                        c++;
                    }
                }
            }
            maxlen=max(maxlen,i-c+1);
        }
        return maxlen;
    }
};