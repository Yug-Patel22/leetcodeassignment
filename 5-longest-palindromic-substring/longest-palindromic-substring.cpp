class Solution {
public:
    string longestPalindrome(string s) {
        if(s=="")return "";
        if(s.length()<2)return s;
        int maxi=INT_MIN;
        int low=0;
        int l=0,r=0;
        for(int i=0; i<s.length(); i++){
            l=i,r=i;
            while(l>=0 && r<s.length() && s[l]==s[r]){
                if(maxi<r-l+1){
                    maxi=r-l+1;
                    low=l;
                }
                l--;
                r++;
            }
            l=i;
            r=i+1;
            while(l>=0 && r<s.length() && s[l]==s[r]){
                if(maxi<r-l+1){
                    maxi=r-l+1;
                    low=l;
                }
                l--;
                r++;
            }
            
        }
        return s.substr(low,maxi);
    }
};