//sol
class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1)return x;
        int l=1;
        int r=x;
        int ans=0;
        while(l<=r){
            long long mid=l+(r-l)/2;
            if(1LL*mid*mid<=x){
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        return ans;
    }
};