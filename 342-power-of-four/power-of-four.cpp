class Solution {
public:
    bool isPowerOfFour(int n) {
        double ans=log(n)/log(4.0);
        double a=ans-floor(ans);
        if(a<1e-10) return true;
        else return false;
    }
};