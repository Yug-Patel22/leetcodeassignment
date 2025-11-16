class Solution {
public:
    int numSub(string s) {
        const long long mod = 1e9 + 7;
        long long c=0;
        long long sum=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='1')c++;
            else{
                sum = (sum + (long long)c * (c + 1) / 2) % mod;
                c=0;
            }
        }
        if(c)sum = (sum + (long long)c * (c + 1) / 2) % mod;
        return sum;
    }
};