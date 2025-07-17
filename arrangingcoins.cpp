class Solution {
public:
    long long retsum(int n){
        return 1LL*n*(n+1)/2;
    }
    int arrangeCoins(int n) {
        int l=1,r=n,ans;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(1LL*retsum(mid)<=n){
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        return ans;
    }
};