class Solution {
public:
    int smallestNumber(int n) {
        if(n==0)return 1;
        int s=2;
        while(s<=n){
            s*=2;
        }
        return s-1;
    }
};