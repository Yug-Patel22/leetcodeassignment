class Solution {
public:
    bool isPowerOfTwo(int n) {
        double ans=log2(n);
        if(ans-floor(ans)==0.0) return true;
        else return false;
    }
};