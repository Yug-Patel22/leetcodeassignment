class Solution {
public:
    int beautySum(string s) {
        int n=s.length();
        int b=0;
        for(int i=0; i<n; i++){
            vector<int> v(26,0);
            for(int j=i; j<n; j++){
                v[s[j]-'a']++;
                int maxi=INT_MIN;
                int mini=INT_MAX;
                for(int k = 0; k < 26; k++) {
                    if(v[k] > 0) {
                        maxi = max(maxi, v[k]);
                        mini = min(mini, v[k]);
                    }
                }
                b+=maxi-mini;
            }
        }
        return b;
    }
};