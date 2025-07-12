class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m;
        stack <int> s;
        for(int i=0; i<nums2.size(); i++){
            while(!s.empty() && nums2[i]>s.top()){
                m[s.top()]=nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }
        for(int i=0; i<nums1.size(); i++){
            if(m.count(nums1[i]))nums1[i]=m[nums1[i]];
            else nums1[i]=-1;
        }
        return nums1;
    }
};