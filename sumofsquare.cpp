class Solution {
public:
    bool judgeSquareSum(int c) {
        long long l=0,r=floor(sqrt(c));
        while(l<=r){
            long long ans=l*l+r*r;
            if(ans==c)return true;
            else if(ans>c)r--;
            else l++;
        }
        return false;
    }
};