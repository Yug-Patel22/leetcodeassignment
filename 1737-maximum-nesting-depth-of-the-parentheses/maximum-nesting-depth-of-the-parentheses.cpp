class Solution {
public:
    int maxDepth(string s) {
        int maxi=0,c=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(')c++;
            if(c>maxi)maxi=c;
            if(s[i]==')')c--;
        }
        return maxi;
    }
};