class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<unsigned long long>v(amount+1,0);
        v[0]=1;
        for(int j=0; j<coins.size(); j++){
            for(int i=coins[j]; i<=amount; i++){
                v[i]=v[i]+v[i-coins[j]];
            }
        }
        return (int)v[amount];
    }
};