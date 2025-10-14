class Solution {
public:
    int climbStairs(int n) {
        int a=1;
        int b=1;
        long long c;
        if(n==1) return 1;
        for(int i=1; i<n; i++){
            if(1LL*a+b>INT_MAX) return c;
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
};