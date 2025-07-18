class Solution {
public:
    int hIndex(vector<int>& citations) {
        int find=-1;
        int l=0,r=citations.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(citations[mid]>=citations.size()-mid){
                find=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if(find==-1)return 0;
        return citations.size()-find;
    }
};