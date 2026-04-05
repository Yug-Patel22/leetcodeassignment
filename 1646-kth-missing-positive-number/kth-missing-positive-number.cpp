class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int l=0,r=n-1,ind=-1;
        while(l<=r){
            int mid=(l+r)/2;
            int missing=arr[mid]-(mid+1);
            if(missing>=k){
                ind=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if(ind==-1){
            int missing=arr[n-1]-n;
            return arr[n-1]+k-missing;
        }
        if(ind==0)return k;
        int missing=arr[ind-1]-ind;
        return arr[ind-1]+k-missing;
    }
};