//unordered_map
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>um;
        for(auto n:nums){
            um[n]++;
        }
        int c=0,max=-1;
        for(auto p:um){
            if(p.second>max){
                c=p.second;
                max=p.second;
            }
            else if(p.second==max){
                c+=p.second;
            }
        }
        return c;
    }
};