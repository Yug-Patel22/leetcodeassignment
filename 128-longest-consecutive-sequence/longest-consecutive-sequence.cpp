class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>us;
        int maxi=0;
        for(int i:nums){
            us.insert(i);
        }
        for(int i: us){
            if(us.find(i-1)==us.end()){
                int t=i , c=1;
                while(us.find(t+1)!=us.end()){
                    c++;
                    t++;
                }
                maxi=max(maxi,c);
            }
        }
        return maxi;
    }
};