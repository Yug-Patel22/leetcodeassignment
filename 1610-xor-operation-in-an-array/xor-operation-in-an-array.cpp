class Solution {
public:
    int xorOperation(int n, int start) {
        if(n==1)return start;
        int ans=start^(start+2);
        for(int i=0; i<n-2; i++){
            ans^=start+2*(i+2);
        }
        return ans;
    }
};